// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATADIAGNOSESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATADIAGNOSESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListDataDiagnosesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataDiagnosesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Types, typesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataDiagnosesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Types, typesShrink_);
    };
    ListDataDiagnosesShrinkRequest() = default ;
    ListDataDiagnosesShrinkRequest(const ListDataDiagnosesShrinkRequest &) = default ;
    ListDataDiagnosesShrinkRequest(ListDataDiagnosesShrinkRequest &&) = default ;
    ListDataDiagnosesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataDiagnosesShrinkRequest() = default ;
    ListDataDiagnosesShrinkRequest& operator=(const ListDataDiagnosesShrinkRequest &) = default ;
    ListDataDiagnosesShrinkRequest& operator=(ListDataDiagnosesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->typesShrink_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListDataDiagnosesShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataDiagnosesShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataDiagnosesShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // typesShrink Field Functions 
    bool hasTypesShrink() const { return this->typesShrink_ != nullptr;};
    void deleteTypesShrink() { this->typesShrink_ = nullptr;};
    inline string getTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(typesShrink_, "") };
    inline ListDataDiagnosesShrinkRequest& setTypesShrink(string typesShrink) { DARABONBA_PTR_SET_VALUE(typesShrink_, typesShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> typesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
