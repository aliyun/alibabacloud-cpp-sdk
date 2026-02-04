// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPSUPPORTPARAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPSUPPORTPARAMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeParameterGroupSupportParamResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParameterGroupSupportParamResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceList, resourceList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParameterGroupSupportParamResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceList, resourceList_);
    };
    DescribeParameterGroupSupportParamResponseBody() = default ;
    DescribeParameterGroupSupportParamResponseBody(const DescribeParameterGroupSupportParamResponseBody &) = default ;
    DescribeParameterGroupSupportParamResponseBody(DescribeParameterGroupSupportParamResponseBody &&) = default ;
    DescribeParameterGroupSupportParamResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParameterGroupSupportParamResponseBody() = default ;
    DescribeParameterGroupSupportParamResponseBody& operator=(const DescribeParameterGroupSupportParamResponseBody &) = default ;
    DescribeParameterGroupSupportParamResponseBody& operator=(DescribeParameterGroupSupportParamResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceList& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(DbType, dbType_);
        DARABONBA_PTR_TO_JSON(DbVersion, dbVersion_);
        DARABONBA_PTR_TO_JSON(ParamName, paramName_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceList& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(DbType, dbType_);
        DARABONBA_PTR_FROM_JSON(DbVersion, dbVersion_);
        DARABONBA_PTR_FROM_JSON(ParamName, paramName_);
      };
      ResourceList() = default ;
      ResourceList(const ResourceList &) = default ;
      ResourceList(ResourceList &&) = default ;
      ResourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceList() = default ;
      ResourceList& operator=(const ResourceList &) = default ;
      ResourceList& operator=(ResourceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->category_ == nullptr
        && this->dbType_ == nullptr && this->dbVersion_ == nullptr && this->paramName_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline ResourceList& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // dbType Field Functions 
      bool hasDbType() const { return this->dbType_ != nullptr;};
      void deleteDbType() { this->dbType_ = nullptr;};
      inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
      inline ResourceList& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


      // dbVersion Field Functions 
      bool hasDbVersion() const { return this->dbVersion_ != nullptr;};
      void deleteDbVersion() { this->dbVersion_ = nullptr;};
      inline string getDbVersion() const { DARABONBA_PTR_GET_DEFAULT(dbVersion_, "") };
      inline ResourceList& setDbVersion(string dbVersion) { DARABONBA_PTR_SET_VALUE(dbVersion_, dbVersion) };


      // paramName Field Functions 
      bool hasParamName() const { return this->paramName_ != nullptr;};
      void deleteParamName() { this->paramName_ = nullptr;};
      inline string getParamName() const { DARABONBA_PTR_GET_DEFAULT(paramName_, "") };
      inline ResourceList& setParamName(string paramName) { DARABONBA_PTR_SET_VALUE(paramName_, paramName) };


    protected:
      // The service category.
      shared_ptr<string> category_ {};
      // The engine type.
      shared_ptr<string> dbType_ {};
      // The engine version.
      shared_ptr<string> dbVersion_ {};
      // The name of the parameter.
      shared_ptr<string> paramName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourceList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeParameterGroupSupportParamResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceList Field Functions 
    bool hasResourceList() const { return this->resourceList_ != nullptr;};
    void deleteResourceList() { this->resourceList_ = nullptr;};
    inline const vector<DescribeParameterGroupSupportParamResponseBody::ResourceList> & getResourceList() const { DARABONBA_PTR_GET_CONST(resourceList_, vector<DescribeParameterGroupSupportParamResponseBody::ResourceList>) };
    inline vector<DescribeParameterGroupSupportParamResponseBody::ResourceList> getResourceList() { DARABONBA_PTR_GET(resourceList_, vector<DescribeParameterGroupSupportParamResponseBody::ResourceList>) };
    inline DescribeParameterGroupSupportParamResponseBody& setResourceList(const vector<DescribeParameterGroupSupportParamResponseBody::ResourceList> & resourceList) { DARABONBA_PTR_SET_VALUE(resourceList_, resourceList) };
    inline DescribeParameterGroupSupportParamResponseBody& setResourceList(vector<DescribeParameterGroupSupportParamResponseBody::ResourceList> && resourceList) { DARABONBA_PTR_SET_RVALUE(resourceList_, resourceList) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The parameters.
    shared_ptr<vector<DescribeParameterGroupSupportParamResponseBody::ResourceList>> resourceList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
