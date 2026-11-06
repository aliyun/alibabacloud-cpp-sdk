// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAKEBASEMOUNTPARAMETERGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAKEBASEMOUNTPARAMETERGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeLakebaseMountParameterGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLakebaseMountParameterGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterGroups, parameterGroups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLakebaseMountParameterGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterGroups, parameterGroups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLakebaseMountParameterGroupsResponseBody() = default ;
    DescribeLakebaseMountParameterGroupsResponseBody(const DescribeLakebaseMountParameterGroupsResponseBody &) = default ;
    DescribeLakebaseMountParameterGroupsResponseBody(DescribeLakebaseMountParameterGroupsResponseBody &&) = default ;
    DescribeLakebaseMountParameterGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLakebaseMountParameterGroupsResponseBody() = default ;
    DescribeLakebaseMountParameterGroupsResponseBody& operator=(const DescribeLakebaseMountParameterGroupsResponseBody &) = default ;
    DescribeLakebaseMountParameterGroupsResponseBody& operator=(DescribeLakebaseMountParameterGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ParameterGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ParameterGroups& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(IsApply, isApply_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(ParameterCounts, parameterCounts_);
        DARABONBA_PTR_TO_JSON(ParameterGroupDesc, parameterGroupDesc_);
        DARABONBA_PTR_TO_JSON(ParameterGroupId, parameterGroupId_);
        DARABONBA_PTR_TO_JSON(ParameterGroupName, parameterGroupName_);
        DARABONBA_PTR_TO_JSON(ParameterGroupType, parameterGroupType_);
      };
      friend void from_json(const Darabonba::Json& j, ParameterGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(IsApply, isApply_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(ParameterCounts, parameterCounts_);
        DARABONBA_PTR_FROM_JSON(ParameterGroupDesc, parameterGroupDesc_);
        DARABONBA_PTR_FROM_JSON(ParameterGroupId, parameterGroupId_);
        DARABONBA_PTR_FROM_JSON(ParameterGroupName, parameterGroupName_);
        DARABONBA_PTR_FROM_JSON(ParameterGroupType, parameterGroupType_);
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
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->isApply_ == nullptr && this->modifyTime_ == nullptr && this->parameterCounts_ == nullptr && this->parameterGroupDesc_ == nullptr && this->parameterGroupId_ == nullptr
        && this->parameterGroupName_ == nullptr && this->parameterGroupType_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ParameterGroups& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // isApply Field Functions 
      bool hasIsApply() const { return this->isApply_ != nullptr;};
      void deleteIsApply() { this->isApply_ = nullptr;};
      inline string getIsApply() const { DARABONBA_PTR_GET_DEFAULT(isApply_, "") };
      inline ParameterGroups& setIsApply(string isApply) { DARABONBA_PTR_SET_VALUE(isApply_, isApply) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline ParameterGroups& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // parameterCounts Field Functions 
      bool hasParameterCounts() const { return this->parameterCounts_ != nullptr;};
      void deleteParameterCounts() { this->parameterCounts_ = nullptr;};
      inline int32_t getParameterCounts() const { DARABONBA_PTR_GET_DEFAULT(parameterCounts_, 0) };
      inline ParameterGroups& setParameterCounts(int32_t parameterCounts) { DARABONBA_PTR_SET_VALUE(parameterCounts_, parameterCounts) };


      // parameterGroupDesc Field Functions 
      bool hasParameterGroupDesc() const { return this->parameterGroupDesc_ != nullptr;};
      void deleteParameterGroupDesc() { this->parameterGroupDesc_ = nullptr;};
      inline string getParameterGroupDesc() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupDesc_, "") };
      inline ParameterGroups& setParameterGroupDesc(string parameterGroupDesc) { DARABONBA_PTR_SET_VALUE(parameterGroupDesc_, parameterGroupDesc) };


      // parameterGroupId Field Functions 
      bool hasParameterGroupId() const { return this->parameterGroupId_ != nullptr;};
      void deleteParameterGroupId() { this->parameterGroupId_ = nullptr;};
      inline string getParameterGroupId() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupId_, "") };
      inline ParameterGroups& setParameterGroupId(string parameterGroupId) { DARABONBA_PTR_SET_VALUE(parameterGroupId_, parameterGroupId) };


      // parameterGroupName Field Functions 
      bool hasParameterGroupName() const { return this->parameterGroupName_ != nullptr;};
      void deleteParameterGroupName() { this->parameterGroupName_ = nullptr;};
      inline string getParameterGroupName() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupName_, "") };
      inline ParameterGroups& setParameterGroupName(string parameterGroupName) { DARABONBA_PTR_SET_VALUE(parameterGroupName_, parameterGroupName) };


      // parameterGroupType Field Functions 
      bool hasParameterGroupType() const { return this->parameterGroupType_ != nullptr;};
      void deleteParameterGroupType() { this->parameterGroupType_ = nullptr;};
      inline string getParameterGroupType() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupType_, "") };
      inline ParameterGroups& setParameterGroupType(string parameterGroupType) { DARABONBA_PTR_SET_VALUE(parameterGroupType_, parameterGroupType) };


    protected:
      // The creation time in UTC.
      shared_ptr<string> createTime_ {};
      // Indicates whether the parameter template is applied. Valid values:
      // - 0: No.
      // - 1: Yes.
      shared_ptr<string> isApply_ {};
      // The modification time in UTC.
      shared_ptr<string> modifyTime_ {};
      // The number of parameters.
      shared_ptr<int32_t> parameterCounts_ {};
      // The description of the parameter template.
      shared_ptr<string> parameterGroupDesc_ {};
      // The ID of the parameter template.
      shared_ptr<string> parameterGroupId_ {};
      // The name of the parameter template.
      shared_ptr<string> parameterGroupName_ {};
      // The templatetype. Valid values:
      // - 0: System.
      // - 1: User.
      shared_ptr<string> parameterGroupType_ {};
    };

    virtual bool empty() const override { return this->parameterGroups_ == nullptr
        && this->requestId_ == nullptr; };
    // parameterGroups Field Functions 
    bool hasParameterGroups() const { return this->parameterGroups_ != nullptr;};
    void deleteParameterGroups() { this->parameterGroups_ = nullptr;};
    inline const vector<DescribeLakebaseMountParameterGroupsResponseBody::ParameterGroups> & getParameterGroups() const { DARABONBA_PTR_GET_CONST(parameterGroups_, vector<DescribeLakebaseMountParameterGroupsResponseBody::ParameterGroups>) };
    inline vector<DescribeLakebaseMountParameterGroupsResponseBody::ParameterGroups> getParameterGroups() { DARABONBA_PTR_GET(parameterGroups_, vector<DescribeLakebaseMountParameterGroupsResponseBody::ParameterGroups>) };
    inline DescribeLakebaseMountParameterGroupsResponseBody& setParameterGroups(const vector<DescribeLakebaseMountParameterGroupsResponseBody::ParameterGroups> & parameterGroups) { DARABONBA_PTR_SET_VALUE(parameterGroups_, parameterGroups) };
    inline DescribeLakebaseMountParameterGroupsResponseBody& setParameterGroups(vector<DescribeLakebaseMountParameterGroupsResponseBody::ParameterGroups> && parameterGroups) { DARABONBA_PTR_SET_RVALUE(parameterGroups_, parameterGroups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLakebaseMountParameterGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The parameter templates.
    shared_ptr<vector<DescribeLakebaseMountParameterGroupsResponseBody::ParameterGroups>> parameterGroups_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
