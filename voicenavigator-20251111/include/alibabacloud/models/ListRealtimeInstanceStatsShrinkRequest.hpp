// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREALTIMEINSTANCESTATSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTREALTIMEINSTANCESTATSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class ListRealtimeInstanceStatsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRealtimeInstanceStatsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListRealtimeInstanceStatsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListRealtimeInstanceStatsShrinkRequest() = default ;
    ListRealtimeInstanceStatsShrinkRequest(const ListRealtimeInstanceStatsShrinkRequest &) = default ;
    ListRealtimeInstanceStatsShrinkRequest(ListRealtimeInstanceStatsShrinkRequest &&) = default ;
    ListRealtimeInstanceStatsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRealtimeInstanceStatsShrinkRequest() = default ;
    ListRealtimeInstanceStatsShrinkRequest& operator=(const ListRealtimeInstanceStatsShrinkRequest &) = default ;
    ListRealtimeInstanceStatsShrinkRequest& operator=(ListRealtimeInstanceStatsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceIdsShrink_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // instanceIdsShrink Field Functions 
    bool hasInstanceIdsShrink() const { return this->instanceIdsShrink_ != nullptr;};
    void deleteInstanceIdsShrink() { this->instanceIdsShrink_ = nullptr;};
    inline string getInstanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceIdsShrink_, "") };
    inline ListRealtimeInstanceStatsShrinkRequest& setInstanceIdsShrink(string instanceIdsShrink) { DARABONBA_PTR_SET_VALUE(instanceIdsShrink_, instanceIdsShrink) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListRealtimeInstanceStatsShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRealtimeInstanceStatsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    shared_ptr<string> instanceIdsShrink_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
