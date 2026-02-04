// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPSRESPONSEBODY_HPP_
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
  class DescribeParameterGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParameterGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterGroups, parameterGroups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParameterGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterGroups, parameterGroups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeParameterGroupsResponseBody() = default ;
    DescribeParameterGroupsResponseBody(const DescribeParameterGroupsResponseBody &) = default ;
    DescribeParameterGroupsResponseBody(DescribeParameterGroupsResponseBody &&) = default ;
    DescribeParameterGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParameterGroupsResponseBody() = default ;
    DescribeParameterGroupsResponseBody& operator=(const DescribeParameterGroupsResponseBody &) = default ;
    DescribeParameterGroupsResponseBody& operator=(DescribeParameterGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ParameterGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ParameterGroups& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(Created, created_);
        DARABONBA_PTR_TO_JSON(Engine, engine_);
        DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
        DARABONBA_PTR_TO_JSON(Modified, modified_);
        DARABONBA_PTR_TO_JSON(ParamGroupId, paramGroupId_);
        DARABONBA_PTR_TO_JSON(ParameterGroupDesc, parameterGroupDesc_);
        DARABONBA_PTR_TO_JSON(ParameterGroupName, parameterGroupName_);
      };
      friend void from_json(const Darabonba::Json& j, ParameterGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(Created, created_);
        DARABONBA_PTR_FROM_JSON(Engine, engine_);
        DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
        DARABONBA_PTR_FROM_JSON(Modified, modified_);
        DARABONBA_PTR_FROM_JSON(ParamGroupId, paramGroupId_);
        DARABONBA_PTR_FROM_JSON(ParameterGroupDesc, parameterGroupDesc_);
        DARABONBA_PTR_FROM_JSON(ParameterGroupName, parameterGroupName_);
      };
      ParameterGroups() = default ;
      ParameterGroups(const ParameterGroups &) = default ;
      ParameterGroups(ParameterGroups &&) = default ;
      ParameterGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ParameterGroups() = default ;
      ParameterGroups& operator=(const ParameterGroups &) = default ;
      ParameterGroups& operator=(ParameterGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->category_ == nullptr
        && this->created_ == nullptr && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->modified_ == nullptr && this->paramGroupId_ == nullptr
        && this->parameterGroupDesc_ == nullptr && this->parameterGroupName_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline int64_t getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, 0L) };
      inline ParameterGroups& setCategory(int64_t category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // created Field Functions 
      bool hasCreated() const { return this->created_ != nullptr;};
      void deleteCreated() { this->created_ = nullptr;};
      inline string getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
      inline ParameterGroups& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline ParameterGroups& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      // engineVersion Field Functions 
      bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
      void deleteEngineVersion() { this->engineVersion_ = nullptr;};
      inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
      inline ParameterGroups& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


      // modified Field Functions 
      bool hasModified() const { return this->modified_ != nullptr;};
      void deleteModified() { this->modified_ = nullptr;};
      inline string getModified() const { DARABONBA_PTR_GET_DEFAULT(modified_, "") };
      inline ParameterGroups& setModified(string modified) { DARABONBA_PTR_SET_VALUE(modified_, modified) };


      // paramGroupId Field Functions 
      bool hasParamGroupId() const { return this->paramGroupId_ != nullptr;};
      void deleteParamGroupId() { this->paramGroupId_ = nullptr;};
      inline string getParamGroupId() const { DARABONBA_PTR_GET_DEFAULT(paramGroupId_, "") };
      inline ParameterGroups& setParamGroupId(string paramGroupId) { DARABONBA_PTR_SET_VALUE(paramGroupId_, paramGroupId) };


      // parameterGroupDesc Field Functions 
      bool hasParameterGroupDesc() const { return this->parameterGroupDesc_ != nullptr;};
      void deleteParameterGroupDesc() { this->parameterGroupDesc_ = nullptr;};
      inline string getParameterGroupDesc() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupDesc_, "") };
      inline ParameterGroups& setParameterGroupDesc(string parameterGroupDesc) { DARABONBA_PTR_SET_VALUE(parameterGroupDesc_, parameterGroupDesc) };


      // parameterGroupName Field Functions 
      bool hasParameterGroupName() const { return this->parameterGroupName_ != nullptr;};
      void deleteParameterGroupName() { this->parameterGroupName_ = nullptr;};
      inline string getParameterGroupName() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupName_, "") };
      inline ParameterGroups& setParameterGroupName(string parameterGroupName) { DARABONBA_PTR_SET_VALUE(parameterGroupName_, parameterGroupName) };


    protected:
      // The service category. Valid values:
      // 
      // *   **0**: Redis Open-Source Edition
      // *   **1**: Tair (Enterprise Edition)
      shared_ptr<int64_t> category_ {};
      // The time when the parameter template was created.
      shared_ptr<string> created_ {};
      // The engine type. Valid values:
      // 
      // *   **redis**: Redis Open-Source Edition or Tair (In-Memory)
      // *   **tair_pena**: Tair (On NVM)
      // *   **tair_pdb**: Tair (On Disk)
      shared_ptr<string> engine_ {};
      // The compatible engine version.
      shared_ptr<string> engineVersion_ {};
      // The time when the parameter template was last modified.
      shared_ptr<string> modified_ {};
      // The parameter template ID.
      shared_ptr<string> paramGroupId_ {};
      // The description of the parameter template.
      shared_ptr<string> parameterGroupDesc_ {};
      // The name of the parameter template.
      shared_ptr<string> parameterGroupName_ {};
    };

    virtual bool empty() const override { return this->parameterGroups_ == nullptr
        && this->requestId_ == nullptr; };
    // parameterGroups Field Functions 
    bool hasParameterGroups() const { return this->parameterGroups_ != nullptr;};
    void deleteParameterGroups() { this->parameterGroups_ = nullptr;};
    inline const vector<DescribeParameterGroupsResponseBody::ParameterGroups> & getParameterGroups() const { DARABONBA_PTR_GET_CONST(parameterGroups_, vector<DescribeParameterGroupsResponseBody::ParameterGroups>) };
    inline vector<DescribeParameterGroupsResponseBody::ParameterGroups> getParameterGroups() { DARABONBA_PTR_GET(parameterGroups_, vector<DescribeParameterGroupsResponseBody::ParameterGroups>) };
    inline DescribeParameterGroupsResponseBody& setParameterGroups(const vector<DescribeParameterGroupsResponseBody::ParameterGroups> & parameterGroups) { DARABONBA_PTR_SET_VALUE(parameterGroups_, parameterGroups) };
    inline DescribeParameterGroupsResponseBody& setParameterGroups(vector<DescribeParameterGroupsResponseBody::ParameterGroups> && parameterGroups) { DARABONBA_PTR_SET_RVALUE(parameterGroups_, parameterGroups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeParameterGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of parameter templates.
    shared_ptr<vector<DescribeParameterGroupsResponseBody::ParameterGroups>> parameterGroups_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
