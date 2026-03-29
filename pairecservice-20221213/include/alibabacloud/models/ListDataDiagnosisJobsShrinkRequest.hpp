// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATADIAGNOSISJOBSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATADIAGNOSISJOBSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListDataDiagnosisJobsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataDiagnosisJobsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Types, typesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataDiagnosisJobsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Types, typesShrink_);
    };
    ListDataDiagnosisJobsShrinkRequest() = default ;
    ListDataDiagnosisJobsShrinkRequest(const ListDataDiagnosisJobsShrinkRequest &) = default ;
    ListDataDiagnosisJobsShrinkRequest(ListDataDiagnosisJobsShrinkRequest &&) = default ;
    ListDataDiagnosisJobsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataDiagnosisJobsShrinkRequest() = default ;
    ListDataDiagnosisJobsShrinkRequest& operator=(const ListDataDiagnosisJobsShrinkRequest &) = default ;
    ListDataDiagnosisJobsShrinkRequest& operator=(ListDataDiagnosisJobsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->status_ == nullptr && this->typesShrink_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListDataDiagnosisJobsShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListDataDiagnosisJobsShrinkRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListDataDiagnosisJobsShrinkRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDataDiagnosisJobsShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // typesShrink Field Functions 
    bool hasTypesShrink() const { return this->typesShrink_ != nullptr;};
    void deleteTypesShrink() { this->typesShrink_ = nullptr;};
    inline string getTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(typesShrink_, "") };
    inline ListDataDiagnosisJobsShrinkRequest& setTypesShrink(string typesShrink) { DARABONBA_PTR_SET_VALUE(typesShrink_, typesShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> pageNumber_ {};
    shared_ptr<string> pageSize_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> typesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
