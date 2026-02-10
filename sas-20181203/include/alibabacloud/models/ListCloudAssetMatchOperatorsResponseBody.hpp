// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDASSETMATCHOPERATORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDASSETMATCHOPERATORSRESPONSEBODY_HPP_
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
  class ListCloudAssetMatchOperatorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudAssetMatchOperatorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MatchTypeOperators, matchTypeOperators_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudAssetMatchOperatorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MatchTypeOperators, matchTypeOperators_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListCloudAssetMatchOperatorsResponseBody() = default ;
    ListCloudAssetMatchOperatorsResponseBody(const ListCloudAssetMatchOperatorsResponseBody &) = default ;
    ListCloudAssetMatchOperatorsResponseBody(ListCloudAssetMatchOperatorsResponseBody &&) = default ;
    ListCloudAssetMatchOperatorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudAssetMatchOperatorsResponseBody() = default ;
    ListCloudAssetMatchOperatorsResponseBody& operator=(const ListCloudAssetMatchOperatorsResponseBody &) = default ;
    ListCloudAssetMatchOperatorsResponseBody& operator=(ListCloudAssetMatchOperatorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MatchTypeOperators : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MatchTypeOperators& obj) { 
        DARABONBA_PTR_TO_JSON(MatchOperators, matchOperators_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, MatchTypeOperators& obj) { 
        DARABONBA_PTR_FROM_JSON(MatchOperators, matchOperators_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      MatchTypeOperators() = default ;
      MatchTypeOperators(const MatchTypeOperators &) = default ;
      MatchTypeOperators(MatchTypeOperators &&) = default ;
      MatchTypeOperators(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MatchTypeOperators() = default ;
      MatchTypeOperators& operator=(const MatchTypeOperators &) = default ;
      MatchTypeOperators& operator=(MatchTypeOperators &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MatchOperators : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MatchOperators& obj) { 
          DARABONBA_PTR_TO_JSON(InputPattern, inputPattern_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ShowName, showName_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, MatchOperators& obj) { 
          DARABONBA_PTR_FROM_JSON(InputPattern, inputPattern_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ShowName, showName_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        MatchOperators() = default ;
        MatchOperators(const MatchOperators &) = default ;
        MatchOperators(MatchOperators &&) = default ;
        MatchOperators(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MatchOperators() = default ;
        MatchOperators& operator=(const MatchOperators &) = default ;
        MatchOperators& operator=(MatchOperators &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->inputPattern_ == nullptr
        && this->name_ == nullptr && this->showName_ == nullptr && this->value_ == nullptr; };
        // inputPattern Field Functions 
        bool hasInputPattern() const { return this->inputPattern_ != nullptr;};
        void deleteInputPattern() { this->inputPattern_ = nullptr;};
        inline string getInputPattern() const { DARABONBA_PTR_GET_DEFAULT(inputPattern_, "") };
        inline MatchOperators& setInputPattern(string inputPattern) { DARABONBA_PTR_SET_VALUE(inputPattern_, inputPattern) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline MatchOperators& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // showName Field Functions 
        bool hasShowName() const { return this->showName_ != nullptr;};
        void deleteShowName() { this->showName_ = nullptr;};
        inline string getShowName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
        inline MatchOperators& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline MatchOperators& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // Operation data types. Values: 
        // - LIST type: 
        // 1. For Name as LIST_CONTAINS, the value is: LIST 
        // 2. For Name as LIST_LENGTH_GT, the value is: PRIMITIVE 
        // 3. For Name as LIST_LENGTH_LT, the value is: PRIMITIVE 
        // 4. For Name as LIST_NOT_CONTAINS, the value is: LIST
        // - STRING type: 
        // 1. For Name as STRING_NOT_IN, the value is: LIST 
        // 2. For Name as STRING_EQ, the value is: PRIMITIVE 
        // 3. For Name as STRING_IN, the value is: LIST 
        // 4. For Name as STRING_NOT_EQ, the value is: PRIMITIVE
        // - BOOLEAN type: 
        // 1. For Name as BOOLEAN_NOT_IN, the value is: LIST 
        // 2. For Name as BOOLEAN_EQ, the value is: PRIMITIVE 
        // 3. For Name as BOOLEAN_IN, the value is: LIST 
        // 4. For Name as BOOLEAN_NOT_EQ, the value is: PRIMITIVE
        // - FLOAT type: 
        // 1. For Name as FLOAT_NOT_IN, the value is: LIST 
        // 2. For Name as FLOAT_EQ, the value is: PRIMITIVE 
        // 3. For Name as FLOAT_IN, the value is: LIST 
        // 4. For Name as FLOAT_NOT_EQ, the value is: PRIMITIVE 
        // 5. For Name as FLOAT_GT, the value is: PRIMITIVE 
        // 6. For Name as FLOAT_GTE, the value is: PRIMITIVE 
        // 7. For Name as FLOAT_LT, the value is: PRIMITIVE 
        // 8. For Name as FLOAT_LTE, the value is: PRIMITIVE
        // - DOUBLE type: 
        // 1. For Name as DOUBLE_NOT_IN, the value is: LIST 
        // 2. For Name as DOUBLE_EQ, the value is: PRIMITIVE 
        // 3. For Name as DOUBLE_IN, the value is: LIST 
        // 4. For Name as DOUBLE_NOT_EQ, the value is: PRIMITIVE 
        // 5. For Name as DOUBLE_GT, the value is: PRIMITIVE 
        // 6. For Name as DOUBLE_GTE, the value is: PRIMITIVE 
        // 7. For Name as DOUBLE_LT, the value is: PRIMITIVE 8. For Name as DOUBLE_LTE, the value is: PRIMITIVE
        // - INTEGER type: 
        // 1. For Name as INTEGER_NOT_IN, the value is: LIST 
        // 2. For Name as INTEGER_EQ, the value is: PRIMITIVE 
        // 3. For Name as INTEGER_IN, the value is: LIST 
        // 4. For Name as INTEGER_NOT_EQ, the value is: PRIMITIVE 
        // 5. For Name as INTEGER_GT, the value is: PRIMITIVE 
        // 6. For Name as INTEGER_GTE, the value is: PRIMITIVE 
        // 7. For Name as INTEGER_LT, the value is: PRIMITIVE 
        // 8. For Name as INTEGER_LTE, the value is: PRIMITIVE
        // - LONG type: 
        // 1. For Name as LONG_NOT_IN, the value is: LIST 
        // 2. For Name as LONG_EQ, the value is: PRIMITIVE 
        // 3. For Name as LONG_IN, the value is: LIST 
        // 4. For Name as LONG_NOT_EQ, the value is: PRIMITIVE 
        // 5. For Name as LONG_GT, the value is: PRIMITIVE 
        // 6. For Name as LONG_GTE, the value is: PRIMITIVE 
        // 7. For Name as LONG_LT, the value is: PRIMITIVE 
        // 8. For Name as LONG_LTE, the value is: PRIMITIVE
        // - INTEGER type (repeated): 
        // 1. For Name as INTEGER_NOT_IN, the value is: LIST 
        // 2. For Name as INTEGER_EQ, the value is: PRIMITIVE 
        // 3. For Name as INTEGER_IN, the value is: LIST 
        // 4. For Name as INTEGER_NOT_EQ, the value is: PRIMITIVE 
        // 5. For Name as INTEGER_GT, the value is: PRIMITIVE 
        // 6. For Name as INTEGER_GTE, the value is: PRIMITIVE 
        // 7. For Name as INTEGER_LT, the value is: PRIMITIVE 
        // 8. For Name as INTEGER_LTE, the value is: PRIMITIVE
        shared_ptr<string> inputPattern_ {};
        // Unique name of the operator. Values: - LIST type: 
        // 1. LIST_CONTAINS: contains 
        // 2. LIST_LENGTH_GT: length greater than 
        // 3. LIST_LENGTH_LT: length less than 
        // 4. LIST_NOT_CONTAINS: does not contain
        // - STRING type: 
        // 1. STRING_NOT_IN: not in list 
        // 2. STRING_EQ: equals 
        // 3. STRING_IN: in list 
        // 4. STRING_NOT_EQ: not equal
        // - BOOLEAN type: 
        // 1. BOOLEAN_NOT_IN: not in list 
        // 2. BOOLEAN_EQ: equals 
        // 3. BOOLEAN_IN: in list 
        // 4. BOOLEAN_NOT_EQ: not equal
        // - FLOAT type: 1. FLOAT_NOT_IN: not in list 
        // 2. FLOAT_EQ: equals 3. FLOAT_IN: in list 
        // 4. FLOAT_NOT_EQ: not equal 
        // 5. FLOAT_GT: greater than 
        // 6. FLOAT_GTE: greater than or equal to 
        // 7. FLOAT_LT: less than 
        // 8. FLOAT_LTE: less than or equal to
        // - DOUBLE type: 
        // 1. DOUBLE_NOT_IN: not in list 
        // 2. DOUBLE_EQ: equals 
        // 3. DOUBLE_IN: in list 
        // 4. DOUBLE_NOT_EQ: not equal 
        // 5. DOUBLE_GT: greater than 
        // 6. DOUBLE_GTE: greater than or equal to 7
        // . DOUBLE_LT: less than 
        // 8. DOUBLE_LTE: less than or equal to
        // - INTEGER type: 
        // 1. INTEGER_NOT_IN: not in list 
        // 2. INTEGER_EQ: equals 
        // 3. INTEGER_IN: in list 
        // 4. INTEGER_NOT_EQ: not equal 
        // 5. INTEGER_GT: greater than 
        // 6. INTEGER_GTE: greater than or equal to 
        // 7. INTEGER_LT: less than 
        // 8. INTEGER_LTE: less than or equal to
        // - LONG type: 
        // 1. LONG_NOT_IN: not in list 
        // 2. LONG_EQ: equals 
        // 3. LONG_IN: in list 
        // 4. LONG_NOT_EQ: not equal 
        // 5. LONG_GT: greater than 
        // 6. LONG_GTE: greater than or equal to 
        // 7. LONG_LT: less than 
        // 8. LONG_LTE: less than or equal to<details>
        shared_ptr<string> name_ {};
        // Operator display name. Values: - For LIST type: 
        // 1. Contains: includes 
        // 2. SizeGreaterThan: size greater than 
        // 3. SizeLessThan: size less than 
        // 4. NotContains: does not include
        // - For STRING type: 
        // 1. NotIn: not in the list 
        // 2. Equals: equals 
        // 3. In: in the list 
        // 4. NotEquals: does not equal
        // - For BOOLEAN type: 
        // 1. NotIn: not in the list 
        // 2. Equals: equals 
        // 3. In: in the list 
        // 4. NotEquals: does not equal
        // - For FLOAT type: 
        // 1. NotIn: not in the list 
        // 2. Equals: equals 
        // 3. In: in the list 
        // 4. NotEquals: does not equal 
        // 5. >: greater than 
        // 6. >=: greater than or equal to 
        // 7. <: less than 
        // 8. <=: less than or equal to
        // - For DOUBLE type: 
        // 1. NotIn: not in the list 
        // 2. Equals: equals 
        // 3. In: in the list 
        // 4. NotEquals: does not equal 
        // 5. >: greater than 
        // 6. >=: greater than or equal to 
        // 7. <: less than 
        // 8. <=: less than or equal to (Note: There seems to be a repetition here, likely meant to be \\"<=\\" for \\"less than or equal to\\")
        // - For INTEGER type: 
        // 1. NotIn: not in the list 
        // 2. Equals: equals 
        // 3. In: in the list 
        // 4. NotEquals: does not equal 
        // 5. >: greater than 
        // 6. >=: greater than or equal to 
        // 7. <: less than 
        // 8. <=: less than or equal to
        // - For LONG type: 
        // 1. NotIn: not in the list 
        // 2. Equals: equals 
        // 3. In: in the list 
        // 4. NotEquals: does not equal 
        // 5. >: greater than 
        // 6. >=: greater than or equal to 
        // 7. <: less than 
        // 8. <=: less than or equal to
        // - For INTEGER type (repeated): 
        // 1. NotIn: not in the list 
        // 2. Equals: equals 
        // 3. In: in the list 
        // 4. NotEquals: does not equal 
        // 5. >: greater than 
        // 6. >=: greater than or equal to 
        // 7. <: less than 
        // 8. <=: less than or equal to
        shared_ptr<string> showName_ {};
        // Operator value. Options: - For LIST type: 
        // 1. CONTAINS: contains 
        // 2. LENGTH_GT: length greater than 
        // 3. LENGTH_LT: length less than 
        // 4. NOT_CONTAINS: does not contain
        // - For STRING type: 
        // 1. NOT_IN: not in the list 
        // 2. EQ: equals 
        // 3. IN: in the list 
        // 4. NOT_EQ: does not equal
        // - For BOOLEAN type: 
        // 1. NOT_IN: not in the list 
        // 2. EQ: equals 
        // 3. IN: in the list 
        // 4. NOT_EQ: does not equal
        // - For FLOAT type: 
        // 1. NOT_IN: not in the list 
        // 2. EQ: equals 
        // 3. IN: in the list 
        // 4. NOT_EQ: does not equal 
        // 5. GT: greater than 
        // 6. GTE: greater than or equal to 
        // 7. LT: less than 
        // 8. LTE: less than or equal to
        // - For DOUBLE type: 
        // 1. NOT_IN: not in the list 
        // 2. EQ: equals 
        // 3. IN: in the list 
        // 4. NOT_EQ: does not equal 
        // 5. GT: greater than 
        // 6. GTE: greater than or equal to 
        // 7. LT: less than 
        // 8. LTE: less than or equal to
        // - For INTEGER type: 
        // 1. NOT_IN: not in the list 
        // 2. EQ: equals 
        // 3. IN: in the list 
        // 4. NOT_EQ: does not equal 
        // 5. GT: greater than 
        // 6. GTE: greater than or equal to 
        // 7. LT: less than 
        // 8. LTE: less than or equal to
        // - For LONG type: 
        // 1. NOT_IN: not in the list 
        // 2. EQ: equals 
        // 3. IN: in the list 
        // 4. NOT_EQ: does not equal 
        // 5. GT: greater than 
        // 6. GTE: greater than or equal to 
        // 7. LT: less than 
        // 8. LTE: less than or equal to
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->matchOperators_ == nullptr
        && this->type_ == nullptr; };
      // matchOperators Field Functions 
      bool hasMatchOperators() const { return this->matchOperators_ != nullptr;};
      void deleteMatchOperators() { this->matchOperators_ = nullptr;};
      inline const vector<MatchTypeOperators::MatchOperators> & getMatchOperators() const { DARABONBA_PTR_GET_CONST(matchOperators_, vector<MatchTypeOperators::MatchOperators>) };
      inline vector<MatchTypeOperators::MatchOperators> getMatchOperators() { DARABONBA_PTR_GET(matchOperators_, vector<MatchTypeOperators::MatchOperators>) };
      inline MatchTypeOperators& setMatchOperators(const vector<MatchTypeOperators::MatchOperators> & matchOperators) { DARABONBA_PTR_SET_VALUE(matchOperators_, matchOperators) };
      inline MatchTypeOperators& setMatchOperators(vector<MatchTypeOperators::MatchOperators> && matchOperators) { DARABONBA_PTR_SET_RVALUE(matchOperators_, matchOperators) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline MatchTypeOperators& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // List of operators
      shared_ptr<vector<MatchTypeOperators::MatchOperators>> matchOperators_ {};
      // The type used by the operator. Values:
      // - LIST 
      // - MAP 
      // - STRING 
      // - BOOLEAN 
      // - FLOAT 
      // - DOUBLE 
      // - INTEGER 
      // - LONG
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->matchTypeOperators_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // matchTypeOperators Field Functions 
    bool hasMatchTypeOperators() const { return this->matchTypeOperators_ != nullptr;};
    void deleteMatchTypeOperators() { this->matchTypeOperators_ = nullptr;};
    inline const vector<ListCloudAssetMatchOperatorsResponseBody::MatchTypeOperators> & getMatchTypeOperators() const { DARABONBA_PTR_GET_CONST(matchTypeOperators_, vector<ListCloudAssetMatchOperatorsResponseBody::MatchTypeOperators>) };
    inline vector<ListCloudAssetMatchOperatorsResponseBody::MatchTypeOperators> getMatchTypeOperators() { DARABONBA_PTR_GET(matchTypeOperators_, vector<ListCloudAssetMatchOperatorsResponseBody::MatchTypeOperators>) };
    inline ListCloudAssetMatchOperatorsResponseBody& setMatchTypeOperators(const vector<ListCloudAssetMatchOperatorsResponseBody::MatchTypeOperators> & matchTypeOperators) { DARABONBA_PTR_SET_VALUE(matchTypeOperators_, matchTypeOperators) };
    inline ListCloudAssetMatchOperatorsResponseBody& setMatchTypeOperators(vector<ListCloudAssetMatchOperatorsResponseBody::MatchTypeOperators> && matchTypeOperators) { DARABONBA_PTR_SET_RVALUE(matchTypeOperators_, matchTypeOperators) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCloudAssetMatchOperatorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCloudAssetMatchOperatorsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // List of operator types
    shared_ptr<vector<ListCloudAssetMatchOperatorsResponseBody::MatchTypeOperators>> matchTypeOperators_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
