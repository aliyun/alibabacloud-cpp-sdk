// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPRESPONSEBODY_HPP_
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
  class DescribeParameterGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParameterGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterGroup, parameterGroup_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParameterGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterGroup, parameterGroup_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeParameterGroupResponseBody() = default ;
    DescribeParameterGroupResponseBody(const DescribeParameterGroupResponseBody &) = default ;
    DescribeParameterGroupResponseBody(DescribeParameterGroupResponseBody &&) = default ;
    DescribeParameterGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParameterGroupResponseBody() = default ;
    DescribeParameterGroupResponseBody& operator=(const DescribeParameterGroupResponseBody &) = default ;
    DescribeParameterGroupResponseBody& operator=(DescribeParameterGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ParameterGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ParameterGroup& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(Created, created_);
        DARABONBA_PTR_TO_JSON(Engine, engine_);
        DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
        DARABONBA_PTR_TO_JSON(Modified, modified_);
        DARABONBA_PTR_TO_JSON(ParamGroupId, paramGroupId_);
        DARABONBA_PTR_TO_JSON(ParamGroupsDetails, paramGroupsDetails_);
        DARABONBA_PTR_TO_JSON(ParameterGroupDesc, parameterGroupDesc_);
        DARABONBA_PTR_TO_JSON(ParameterGroupName, parameterGroupName_);
      };
      friend void from_json(const Darabonba::Json& j, ParameterGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(Created, created_);
        DARABONBA_PTR_FROM_JSON(Engine, engine_);
        DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
        DARABONBA_PTR_FROM_JSON(Modified, modified_);
        DARABONBA_PTR_FROM_JSON(ParamGroupId, paramGroupId_);
        DARABONBA_PTR_FROM_JSON(ParamGroupsDetails, paramGroupsDetails_);
        DARABONBA_PTR_FROM_JSON(ParameterGroupDesc, parameterGroupDesc_);
        DARABONBA_PTR_FROM_JSON(ParameterGroupName, parameterGroupName_);
      };
      ParameterGroup() = default ;
      ParameterGroup(const ParameterGroup &) = default ;
      ParameterGroup(ParameterGroup &&) = default ;
      ParameterGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ParameterGroup() = default ;
      ParameterGroup& operator=(const ParameterGroup &) = default ;
      ParameterGroup& operator=(ParameterGroup &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ParamGroupsDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ParamGroupsDetails& obj) { 
          DARABONBA_PTR_TO_JSON(ParamName, paramName_);
          DARABONBA_PTR_TO_JSON(ParamValue, paramValue_);
        };
        friend void from_json(const Darabonba::Json& j, ParamGroupsDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(ParamName, paramName_);
          DARABONBA_PTR_FROM_JSON(ParamValue, paramValue_);
        };
        ParamGroupsDetails() = default ;
        ParamGroupsDetails(const ParamGroupsDetails &) = default ;
        ParamGroupsDetails(ParamGroupsDetails &&) = default ;
        ParamGroupsDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ParamGroupsDetails() = default ;
        ParamGroupsDetails& operator=(const ParamGroupsDetails &) = default ;
        ParamGroupsDetails& operator=(ParamGroupsDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->paramName_ == nullptr
        && this->paramValue_ == nullptr; };
        // paramName Field Functions 
        bool hasParamName() const { return this->paramName_ != nullptr;};
        void deleteParamName() { this->paramName_ = nullptr;};
        inline string getParamName() const { DARABONBA_PTR_GET_DEFAULT(paramName_, "") };
        inline ParamGroupsDetails& setParamName(string paramName) { DARABONBA_PTR_SET_VALUE(paramName_, paramName) };


        // paramValue Field Functions 
        bool hasParamValue() const { return this->paramValue_ != nullptr;};
        void deleteParamValue() { this->paramValue_ = nullptr;};
        inline string getParamValue() const { DARABONBA_PTR_GET_DEFAULT(paramValue_, "") };
        inline ParamGroupsDetails& setParamValue(string paramValue) { DARABONBA_PTR_SET_VALUE(paramValue_, paramValue) };


      protected:
        // The name of the parameter.
        shared_ptr<string> paramName_ {};
        // The value of the parameter.
        shared_ptr<string> paramValue_ {};
      };

      virtual bool empty() const override { return this->category_ == nullptr
        && this->created_ == nullptr && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->modified_ == nullptr && this->paramGroupId_ == nullptr
        && this->paramGroupsDetails_ == nullptr && this->parameterGroupDesc_ == nullptr && this->parameterGroupName_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline int64_t getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, 0L) };
      inline ParameterGroup& setCategory(int64_t category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // created Field Functions 
      bool hasCreated() const { return this->created_ != nullptr;};
      void deleteCreated() { this->created_ = nullptr;};
      inline string getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
      inline ParameterGroup& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline ParameterGroup& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      // engineVersion Field Functions 
      bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
      void deleteEngineVersion() { this->engineVersion_ = nullptr;};
      inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
      inline ParameterGroup& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


      // modified Field Functions 
      bool hasModified() const { return this->modified_ != nullptr;};
      void deleteModified() { this->modified_ = nullptr;};
      inline string getModified() const { DARABONBA_PTR_GET_DEFAULT(modified_, "") };
      inline ParameterGroup& setModified(string modified) { DARABONBA_PTR_SET_VALUE(modified_, modified) };


      // paramGroupId Field Functions 
      bool hasParamGroupId() const { return this->paramGroupId_ != nullptr;};
      void deleteParamGroupId() { this->paramGroupId_ = nullptr;};
      inline string getParamGroupId() const { DARABONBA_PTR_GET_DEFAULT(paramGroupId_, "") };
      inline ParameterGroup& setParamGroupId(string paramGroupId) { DARABONBA_PTR_SET_VALUE(paramGroupId_, paramGroupId) };


      // paramGroupsDetails Field Functions 
      bool hasParamGroupsDetails() const { return this->paramGroupsDetails_ != nullptr;};
      void deleteParamGroupsDetails() { this->paramGroupsDetails_ = nullptr;};
      inline const vector<ParameterGroup::ParamGroupsDetails> & getParamGroupsDetails() const { DARABONBA_PTR_GET_CONST(paramGroupsDetails_, vector<ParameterGroup::ParamGroupsDetails>) };
      inline vector<ParameterGroup::ParamGroupsDetails> getParamGroupsDetails() { DARABONBA_PTR_GET(paramGroupsDetails_, vector<ParameterGroup::ParamGroupsDetails>) };
      inline ParameterGroup& setParamGroupsDetails(const vector<ParameterGroup::ParamGroupsDetails> & paramGroupsDetails) { DARABONBA_PTR_SET_VALUE(paramGroupsDetails_, paramGroupsDetails) };
      inline ParameterGroup& setParamGroupsDetails(vector<ParameterGroup::ParamGroupsDetails> && paramGroupsDetails) { DARABONBA_PTR_SET_RVALUE(paramGroupsDetails_, paramGroupsDetails) };


      // parameterGroupDesc Field Functions 
      bool hasParameterGroupDesc() const { return this->parameterGroupDesc_ != nullptr;};
      void deleteParameterGroupDesc() { this->parameterGroupDesc_ = nullptr;};
      inline string getParameterGroupDesc() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupDesc_, "") };
      inline ParameterGroup& setParameterGroupDesc(string parameterGroupDesc) { DARABONBA_PTR_SET_VALUE(parameterGroupDesc_, parameterGroupDesc) };


      // parameterGroupName Field Functions 
      bool hasParameterGroupName() const { return this->parameterGroupName_ != nullptr;};
      void deleteParameterGroupName() { this->parameterGroupName_ = nullptr;};
      inline string getParameterGroupName() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupName_, "") };
      inline ParameterGroup& setParameterGroupName(string parameterGroupName) { DARABONBA_PTR_SET_VALUE(parameterGroupName_, parameterGroupName) };


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
      // * *redis*: Redis or Tair DRAM-based instance
      // * *tair_pena*: Tair persistent memory-optimized instance
      // * *tair_pdb*: Tair ESSD-based instance
      shared_ptr<string> engine_ {};
      // The compatible engine version.
      shared_ptr<string> engineVersion_ {};
      // The time when the parameter template was last modified.
      shared_ptr<string> modified_ {};
      // The parameter template ID, which is globally unique.
      shared_ptr<string> paramGroupId_ {};
      // The parameter details of the parameter template.
      shared_ptr<vector<ParameterGroup::ParamGroupsDetails>> paramGroupsDetails_ {};
      // The description of the parameter template.
      shared_ptr<string> parameterGroupDesc_ {};
      // The name of the parameter template.
      shared_ptr<string> parameterGroupName_ {};
    };

    virtual bool empty() const override { return this->parameterGroup_ == nullptr
        && this->requestId_ == nullptr; };
    // parameterGroup Field Functions 
    bool hasParameterGroup() const { return this->parameterGroup_ != nullptr;};
    void deleteParameterGroup() { this->parameterGroup_ = nullptr;};
    inline const DescribeParameterGroupResponseBody::ParameterGroup & getParameterGroup() const { DARABONBA_PTR_GET_CONST(parameterGroup_, DescribeParameterGroupResponseBody::ParameterGroup) };
    inline DescribeParameterGroupResponseBody::ParameterGroup getParameterGroup() { DARABONBA_PTR_GET(parameterGroup_, DescribeParameterGroupResponseBody::ParameterGroup) };
    inline DescribeParameterGroupResponseBody& setParameterGroup(const DescribeParameterGroupResponseBody::ParameterGroup & parameterGroup) { DARABONBA_PTR_SET_VALUE(parameterGroup_, parameterGroup) };
    inline DescribeParameterGroupResponseBody& setParameterGroup(DescribeParameterGroupResponseBody::ParameterGroup && parameterGroup) { DARABONBA_PTR_SET_RVALUE(parameterGroup_, parameterGroup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeParameterGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the parameter template.
    shared_ptr<DescribeParameterGroupResponseBody::ParameterGroup> parameterGroup_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
