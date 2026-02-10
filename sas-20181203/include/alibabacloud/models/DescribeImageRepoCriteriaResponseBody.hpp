// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEREPOCRITERIARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEREPOCRITERIARESPONSEBODY_HPP_
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
  class DescribeImageRepoCriteriaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageRepoCriteriaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CriteriaList, criteriaList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageRepoCriteriaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CriteriaList, criteriaList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImageRepoCriteriaResponseBody() = default ;
    DescribeImageRepoCriteriaResponseBody(const DescribeImageRepoCriteriaResponseBody &) = default ;
    DescribeImageRepoCriteriaResponseBody(DescribeImageRepoCriteriaResponseBody &&) = default ;
    DescribeImageRepoCriteriaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageRepoCriteriaResponseBody() = default ;
    DescribeImageRepoCriteriaResponseBody& operator=(const DescribeImageRepoCriteriaResponseBody &) = default ;
    DescribeImageRepoCriteriaResponseBody& operator=(DescribeImageRepoCriteriaResponseBody &&) = default ;
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
      // The name of the search condition. Valid values:
      // 
      // *   **instanceId**: the ID of the image instance.
      // *   **repoName**: the name of the image repository.
      // *   **repoId**: the ID of the image repository.
      // *   **repoNamespace**: the namespace of the image repository.
      // *   **regionId**: the region in which the image resides.
      // *   **vulStatus**: indicates whether vulnerabilities exist.
      // *   **alarmStatus**: indicates whether security alerts exist.
      // *   **hcStatus**: indicates whether baseline risks exist.
      // *   **riskStatus**: indicates whether risks exist.
      // *   **registryType**: the type of the image repository.
      // *   **ImageId**: the image ID.
      // *   **tag**: the image tag.
      shared_ptr<string> name_ {};
      // The type of the search condition. Valid values:
      // 
      // *   **input**: The search condition needs to be specified.
      // *   **select**: The search condition is an option that can be selected from the drop-down list.
      shared_ptr<string> type_ {};
      // The values of the search condition. This parameter is returned only if the value of **Type** is set to **select**.
      // 
      // > If the value of **Type** is set to **input**, the return value of this parameter is empty.
      shared_ptr<string> values_ {};
    };

    virtual bool empty() const override { return this->criteriaList_ == nullptr
        && this->requestId_ == nullptr; };
    // criteriaList Field Functions 
    bool hasCriteriaList() const { return this->criteriaList_ != nullptr;};
    void deleteCriteriaList() { this->criteriaList_ = nullptr;};
    inline const vector<DescribeImageRepoCriteriaResponseBody::CriteriaList> & getCriteriaList() const { DARABONBA_PTR_GET_CONST(criteriaList_, vector<DescribeImageRepoCriteriaResponseBody::CriteriaList>) };
    inline vector<DescribeImageRepoCriteriaResponseBody::CriteriaList> getCriteriaList() { DARABONBA_PTR_GET(criteriaList_, vector<DescribeImageRepoCriteriaResponseBody::CriteriaList>) };
    inline DescribeImageRepoCriteriaResponseBody& setCriteriaList(const vector<DescribeImageRepoCriteriaResponseBody::CriteriaList> & criteriaList) { DARABONBA_PTR_SET_VALUE(criteriaList_, criteriaList) };
    inline DescribeImageRepoCriteriaResponseBody& setCriteriaList(vector<DescribeImageRepoCriteriaResponseBody::CriteriaList> && criteriaList) { DARABONBA_PTR_SET_RVALUE(criteriaList_, criteriaList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageRepoCriteriaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array consisting of the filter conditions that are supported by the image repository.
    shared_ptr<vector<DescribeImageRepoCriteriaResponseBody::CriteriaList>> criteriaList_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
