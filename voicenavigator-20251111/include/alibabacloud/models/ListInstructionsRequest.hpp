// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTRUCTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTRUCTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class ListInstructionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstructionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProviderId, providerId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstructionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProviderId, providerId_);
    };
    ListInstructionsRequest() = default ;
    ListInstructionsRequest(const ListInstructionsRequest &) = default ;
    ListInstructionsRequest(ListInstructionsRequest &&) = default ;
    ListInstructionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstructionsRequest() = default ;
    ListInstructionsRequest& operator=(const ListInstructionsRequest &) = default ;
    ListInstructionsRequest& operator=(ListInstructionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->providerId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstructionsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListInstructionsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListInstructionsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // providerId Field Functions 
    bool hasProviderId() const { return this->providerId_ != nullptr;};
    void deleteProviderId() { this->providerId_ = nullptr;};
    inline string getProviderId() const { DARABONBA_PTR_GET_DEFAULT(providerId_, "") };
    inline ListInstructionsRequest& setProviderId(string providerId) { DARABONBA_PTR_SET_VALUE(providerId_, providerId) };


  protected:
    shared_ptr<string> instanceId_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> providerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
