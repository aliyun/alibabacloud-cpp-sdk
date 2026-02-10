// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGECRITERIARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGECRITERIARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageCriteriaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageCriteriaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CriteriaList, criteriaList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageCriteriaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CriteriaList, criteriaList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImageCriteriaResponseBody() = default ;
    DescribeImageCriteriaResponseBody(const DescribeImageCriteriaResponseBody &) = default ;
    DescribeImageCriteriaResponseBody(DescribeImageCriteriaResponseBody &&) = default ;
    DescribeImageCriteriaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageCriteriaResponseBody() = default ;
    DescribeImageCriteriaResponseBody& operator=(const DescribeImageCriteriaResponseBody &) = default ;
    DescribeImageCriteriaResponseBody& operator=(DescribeImageCriteriaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CriteriaList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CriteriaList& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Values, values_);
      };
      friend void from_json(const Darabonba::Json& j, CriteriaList& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Values, values_);
      };
      CriteriaList() = default ;
      CriteriaList(const CriteriaList &) = default ;
      CriteriaList(CriteriaList &&) = default ;
      CriteriaList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CriteriaList() = default ;
      CriteriaList& operator=(const CriteriaList &) = default ;
      CriteriaList& operator=(CriteriaList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->type_ == nullptr && this->values_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline CriteriaList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline CriteriaList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // values Field Functions 
      bool hasValues() const { return this->values_ != nullptr;};
      void deleteValues() { this->values_ = nullptr;};
      inline string getValues() const { DARABONBA_PTR_GET_DEFAULT(values_, "") };
      inline CriteriaList& setValues(string values) { DARABONBA_PTR_SET_VALUE(values_, values) };


    protected:
      // The name of the search condition.
      // - **tag**: the tag of the image
      // - **digest**: the digest of the image
      // - **vulStatus**: the status of the vulnerability
      // - **alarmStatus**: the status of the alert
      // - **riskStatus**: the status of the risk
      // - **registryType**: the type of the image repository
      shared_ptr<string> name_ {};
      // The type of the search condition. Valid values:
      // - **input**: The search condition needs to be specified.
      // - **select**: The search condition is an option that can be selected from the drop-down list.
      shared_ptr<string> type_ {};
      // The values of the search condition. This parameter is returned only if the value of Type is select.
      // > If the value of **Type** is **input**, the value of this parameter is an empty string.
      shared_ptr<string> values_ {};
    };

    virtual bool empty() const override { return this->criteriaList_ == nullptr
        && this->requestId_ == nullptr; };
    // criteriaList Field Functions 
    bool hasCriteriaList() const { return this->criteriaList_ != nullptr;};
    void deleteCriteriaList() { this->criteriaList_ = nullptr;};
    inline const vector<DescribeImageCriteriaResponseBody::CriteriaList> & getCriteriaList() const { DARABONBA_PTR_GET_CONST(criteriaList_, vector<DescribeImageCriteriaResponseBody::CriteriaList>) };
    inline vector<DescribeImageCriteriaResponseBody::CriteriaList> getCriteriaList() { DARABONBA_PTR_GET(criteriaList_, vector<DescribeImageCriteriaResponseBody::CriteriaList>) };
    inline DescribeImageCriteriaResponseBody& setCriteriaList(const vector<DescribeImageCriteriaResponseBody::CriteriaList> & criteriaList) { DARABONBA_PTR_SET_VALUE(criteriaList_, criteriaList) };
    inline DescribeImageCriteriaResponseBody& setCriteriaList(vector<DescribeImageCriteriaResponseBody::CriteriaList> && criteriaList) { DARABONBA_PTR_SET_RVALUE(criteriaList_, criteriaList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageCriteriaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of the search conditions.
    shared_ptr<vector<DescribeImageCriteriaResponseBody::CriteriaList>> criteriaList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
