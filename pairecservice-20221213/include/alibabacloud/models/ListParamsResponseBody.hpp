// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPARAMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPARAMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListParamsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListParamsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListParamsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListParamsResponseBody() = default ;
    ListParamsResponseBody(const ListParamsResponseBody &) = default ;
    ListParamsResponseBody(ListParamsResponseBody &&) = default ;
    ListParamsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListParamsResponseBody() = default ;
    ListParamsResponseBody& operator=(const ListParamsResponseBody &) = default ;
    ListParamsResponseBody& operator=(ListParamsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Params : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Params& obj) { 
        DARABONBA_PTR_TO_JSON(Environment, environment_);
        DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ParamId, paramId_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Params& obj) { 
        DARABONBA_PTR_FROM_JSON(Environment, environment_);
        DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ParamId, paramId_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Params() = default ;
      Params(const Params &) = default ;
      Params(Params &&) = default ;
      Params(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Params() = default ;
      Params& operator=(const Params &) = default ;
      Params& operator=(Params &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->environment_ == nullptr
        && this->gmtModifiedTime_ == nullptr && this->name_ == nullptr && this->paramId_ == nullptr && this->value_ == nullptr; };
      // environment Field Functions 
      bool hasEnvironment() const { return this->environment_ != nullptr;};
      void deleteEnvironment() { this->environment_ = nullptr;};
      inline string getEnvironment() const { DARABONBA_PTR_GET_DEFAULT(environment_, "") };
      inline Params& setEnvironment(string environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };


      // gmtModifiedTime Field Functions 
      bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
      void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
      inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
      inline Params& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Params& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // paramId Field Functions 
      bool hasParamId() const { return this->paramId_ != nullptr;};
      void deleteParamId() { this->paramId_ = nullptr;};
      inline string getParamId() const { DARABONBA_PTR_GET_DEFAULT(paramId_, "") };
      inline Params& setParamId(string paramId) { DARABONBA_PTR_SET_VALUE(paramId_, paramId) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Params& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> environment_ {};
      shared_ptr<string> gmtModifiedTime_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> paramId_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->params_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<ListParamsResponseBody::Params> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<ListParamsResponseBody::Params>) };
    inline vector<ListParamsResponseBody::Params> getParams() { DARABONBA_PTR_GET(params_, vector<ListParamsResponseBody::Params>) };
    inline ListParamsResponseBody& setParams(const vector<ListParamsResponseBody::Params> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline ListParamsResponseBody& setParams(vector<ListParamsResponseBody::Params> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListParamsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListParamsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListParamsResponseBody::Params>> params_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
