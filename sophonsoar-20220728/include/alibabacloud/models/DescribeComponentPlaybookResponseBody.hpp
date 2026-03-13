// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMPONENTPLAYBOOKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMPONENTPLAYBOOKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeComponentPlaybookResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeComponentPlaybookResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Playbooks, playbooks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeComponentPlaybookResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Playbooks, playbooks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeComponentPlaybookResponseBody() = default ;
    DescribeComponentPlaybookResponseBody(const DescribeComponentPlaybookResponseBody &) = default ;
    DescribeComponentPlaybookResponseBody(DescribeComponentPlaybookResponseBody &&) = default ;
    DescribeComponentPlaybookResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeComponentPlaybookResponseBody() = default ;
    DescribeComponentPlaybookResponseBody& operator=(const DescribeComponentPlaybookResponseBody &) = default ;
    DescribeComponentPlaybookResponseBody& operator=(DescribeComponentPlaybookResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Playbooks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Playbooks& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(InputParams, inputParams_);
        DARABONBA_PTR_TO_JSON(ParamType, paramType_);
      };
      friend void from_json(const Darabonba::Json& j, Playbooks& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(InputParams, inputParams_);
        DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
      };
      Playbooks() = default ;
      Playbooks(const Playbooks &) = default ;
      Playbooks(Playbooks &&) = default ;
      Playbooks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Playbooks() = default ;
      Playbooks& operator=(const Playbooks &) = default ;
      Playbooks& operator=(Playbooks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->displayName_ == nullptr && this->inputParams_ == nullptr && this->paramType_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Playbooks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Playbooks& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // inputParams Field Functions 
      bool hasInputParams() const { return this->inputParams_ != nullptr;};
      void deleteInputParams() { this->inputParams_ = nullptr;};
      inline string getInputParams() const { DARABONBA_PTR_GET_DEFAULT(inputParams_, "") };
      inline Playbooks& setInputParams(string inputParams) { DARABONBA_PTR_SET_VALUE(inputParams_, inputParams) };


      // paramType Field Functions 
      bool hasParamType() const { return this->paramType_ != nullptr;};
      void deleteParamType() { this->paramType_ = nullptr;};
      inline string getParamType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
      inline Playbooks& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


    protected:
      // The description of the predefined component.
      shared_ptr<string> description_ {};
      // The name of the predefined component.
      shared_ptr<string> displayName_ {};
      // The input parameter configuration of the playbook. The value is a JSON array.
      // 
      // >  For more information, see [DescribePlaybookInputOutput](~~DescribePlaybookInputOutput~~).
      shared_ptr<string> inputParams_ {};
      shared_ptr<string> paramType_ {};
    };

    virtual bool empty() const override { return this->playbooks_ == nullptr
        && this->requestId_ == nullptr; };
    // playbooks Field Functions 
    bool hasPlaybooks() const { return this->playbooks_ != nullptr;};
    void deletePlaybooks() { this->playbooks_ = nullptr;};
    inline const vector<DescribeComponentPlaybookResponseBody::Playbooks> & getPlaybooks() const { DARABONBA_PTR_GET_CONST(playbooks_, vector<DescribeComponentPlaybookResponseBody::Playbooks>) };
    inline vector<DescribeComponentPlaybookResponseBody::Playbooks> getPlaybooks() { DARABONBA_PTR_GET(playbooks_, vector<DescribeComponentPlaybookResponseBody::Playbooks>) };
    inline DescribeComponentPlaybookResponseBody& setPlaybooks(const vector<DescribeComponentPlaybookResponseBody::Playbooks> & playbooks) { DARABONBA_PTR_SET_VALUE(playbooks_, playbooks) };
    inline DescribeComponentPlaybookResponseBody& setPlaybooks(vector<DescribeComponentPlaybookResponseBody::Playbooks> && playbooks) { DARABONBA_PTR_SET_RVALUE(playbooks_, playbooks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeComponentPlaybookResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the predefined components.
    shared_ptr<vector<DescribeComponentPlaybookResponseBody::Playbooks>> playbooks_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
