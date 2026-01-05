// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataQualityTemplate, dataQualityTemplate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataQualityTemplate, dataQualityTemplate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDataQualityTemplateResponseBody() = default ;
    GetDataQualityTemplateResponseBody(const GetDataQualityTemplateResponseBody &) = default ;
    GetDataQualityTemplateResponseBody(GetDataQualityTemplateResponseBody &&) = default ;
    GetDataQualityTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityTemplateResponseBody() = default ;
    GetDataQualityTemplateResponseBody& operator=(const GetDataQualityTemplateResponseBody &) = default ;
    GetDataQualityTemplateResponseBody& operator=(GetDataQualityTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataQualityTemplate : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataQualityTemplate& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(Spec, spec_);
      };
      friend void from_json(const Darabonba::Json& j, DataQualityTemplate& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(Spec, spec_);
      };
      DataQualityTemplate() = default ;
      DataQualityTemplate(const DataQualityTemplate &) = default ;
      DataQualityTemplate(DataQualityTemplate &&) = default ;
      DataQualityTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataQualityTemplate() = default ;
      DataQualityTemplate& operator=(const DataQualityTemplate &) = default ;
      DataQualityTemplate& operator=(DataQualityTemplate &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->createUser_ == nullptr && this->id_ == nullptr && this->modifyTime_ == nullptr && this->modifyUser_ == nullptr && this->owner_ == nullptr
        && this->projectId_ == nullptr && this->spec_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline DataQualityTemplate& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createUser Field Functions 
      bool hasCreateUser() const { return this->createUser_ != nullptr;};
      void deleteCreateUser() { this->createUser_ = nullptr;};
      inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
      inline DataQualityTemplate& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline DataQualityTemplate& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
      inline DataQualityTemplate& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // modifyUser Field Functions 
      bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
      void deleteModifyUser() { this->modifyUser_ = nullptr;};
      inline string getModifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
      inline DataQualityTemplate& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline DataQualityTemplate& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline DataQualityTemplate& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // spec Field Functions 
      bool hasSpec() const { return this->spec_ != nullptr;};
      void deleteSpec() { this->spec_ = nullptr;};
      inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
      inline DataQualityTemplate& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    protected:
      // The time when the data quality rule template was created.
      shared_ptr<int64_t> createTime_ {};
      // The creator of the data quality rule template.
      shared_ptr<string> createUser_ {};
      // The ID of the data quality rule template.
      shared_ptr<string> id_ {};
      // The time when the data quality rule template was updated.
      shared_ptr<int64_t> modifyTime_ {};
      // The last updater of the data quality rule template.
      shared_ptr<string> modifyUser_ {};
      // The owner of the data quality rule template.
      shared_ptr<string> owner_ {};
      // The project ID.
      shared_ptr<int64_t> projectId_ {};
      // Specific configurations of the data quality rule template. For more information, see [Data quality Spec configuration description](~2963394~).
      shared_ptr<string> spec_ {};
    };

    virtual bool empty() const override { return this->dataQualityTemplate_ == nullptr
        && this->requestId_ == nullptr; };
    // dataQualityTemplate Field Functions 
    bool hasDataQualityTemplate() const { return this->dataQualityTemplate_ != nullptr;};
    void deleteDataQualityTemplate() { this->dataQualityTemplate_ = nullptr;};
    inline const GetDataQualityTemplateResponseBody::DataQualityTemplate & getDataQualityTemplate() const { DARABONBA_PTR_GET_CONST(dataQualityTemplate_, GetDataQualityTemplateResponseBody::DataQualityTemplate) };
    inline GetDataQualityTemplateResponseBody::DataQualityTemplate getDataQualityTemplate() { DARABONBA_PTR_GET(dataQualityTemplate_, GetDataQualityTemplateResponseBody::DataQualityTemplate) };
    inline GetDataQualityTemplateResponseBody& setDataQualityTemplate(const GetDataQualityTemplateResponseBody::DataQualityTemplate & dataQualityTemplate) { DARABONBA_PTR_SET_VALUE(dataQualityTemplate_, dataQualityTemplate) };
    inline GetDataQualityTemplateResponseBody& setDataQualityTemplate(GetDataQualityTemplateResponseBody::DataQualityTemplate && dataQualityTemplate) { DARABONBA_PTR_SET_RVALUE(dataQualityTemplate_, dataQualityTemplate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataQualityTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data quality rule template.
    shared_ptr<GetDataQualityTemplateResponseBody::DataQualityTemplate> dataQualityTemplate_ {};
    // The API request ID, which is generated as a UUID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
