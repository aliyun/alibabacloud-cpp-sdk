// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINCNAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINCNAMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainCnameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainCnameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CnameDatas, cnameDatas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainCnameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CnameDatas, cnameDatas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainCnameResponseBody() = default ;
    DescribeDomainCnameResponseBody(const DescribeDomainCnameResponseBody &) = default ;
    DescribeDomainCnameResponseBody(DescribeDomainCnameResponseBody &&) = default ;
    DescribeDomainCnameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainCnameResponseBody() = default ;
    DescribeDomainCnameResponseBody& operator=(const DescribeDomainCnameResponseBody &) = default ;
    DescribeDomainCnameResponseBody& operator=(DescribeDomainCnameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CnameDatas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CnameDatas& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
      };
      friend void from_json(const Darabonba::Json& j, CnameDatas& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
      };
      CnameDatas() = default ;
      CnameDatas(const CnameDatas &) = default ;
      CnameDatas(CnameDatas &&) = default ;
      CnameDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CnameDatas() = default ;
      CnameDatas& operator=(const CnameDatas &) = default ;
      CnameDatas& operator=(CnameDatas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(Cname, cname_);
          DARABONBA_PTR_TO_JSON(Domain, domain_);
          DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
          DARABONBA_PTR_TO_JSON(Passed, passed_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(Cname, cname_);
          DARABONBA_PTR_FROM_JSON(Domain, domain_);
          DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
          DARABONBA_PTR_FROM_JSON(Passed, passed_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Data() = default ;
        Data(const Data &) = default ;
        Data(Data &&) = default ;
        Data(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Data() = default ;
        Data& operator=(const Data &) = default ;
        Data& operator=(Data &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cname_ == nullptr
        && this->domain_ == nullptr && this->errMsg_ == nullptr && this->passed_ == nullptr && this->status_ == nullptr; };
        // cname Field Functions 
        bool hasCname() const { return this->cname_ != nullptr;};
        void deleteCname() { this->cname_ = nullptr;};
        inline string getCname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
        inline Data& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


        // domain Field Functions 
        bool hasDomain() const { return this->domain_ != nullptr;};
        void deleteDomain() { this->domain_ = nullptr;};
        inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
        inline Data& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


        // errMsg Field Functions 
        bool hasErrMsg() const { return this->errMsg_ != nullptr;};
        void deleteErrMsg() { this->errMsg_ = nullptr;};
        inline string getErrMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
        inline Data& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


        // passed Field Functions 
        bool hasPassed() const { return this->passed_ != nullptr;};
        void deletePassed() { this->passed_ = nullptr;};
        inline string getPassed() const { DARABONBA_PTR_GET_DEFAULT(passed_, "") };
        inline Data& setPassed(string passed) { DARABONBA_PTR_SET_VALUE(passed_, passed) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> cname_ {};
        shared_ptr<string> domain_ {};
        shared_ptr<string> errMsg_ {};
        shared_ptr<string> passed_ {};
        shared_ptr<int32_t> status_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<CnameDatas::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<CnameDatas::Data>) };
      inline vector<CnameDatas::Data> getData() { DARABONBA_PTR_GET(data_, vector<CnameDatas::Data>) };
      inline CnameDatas& setData(const vector<CnameDatas::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline CnameDatas& setData(vector<CnameDatas::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    protected:
      shared_ptr<vector<CnameDatas::Data>> data_ {};
    };

    virtual bool empty() const override { return this->cnameDatas_ == nullptr
        && this->requestId_ == nullptr; };
    // cnameDatas Field Functions 
    bool hasCnameDatas() const { return this->cnameDatas_ != nullptr;};
    void deleteCnameDatas() { this->cnameDatas_ = nullptr;};
    inline const DescribeDomainCnameResponseBody::CnameDatas & getCnameDatas() const { DARABONBA_PTR_GET_CONST(cnameDatas_, DescribeDomainCnameResponseBody::CnameDatas) };
    inline DescribeDomainCnameResponseBody::CnameDatas getCnameDatas() { DARABONBA_PTR_GET(cnameDatas_, DescribeDomainCnameResponseBody::CnameDatas) };
    inline DescribeDomainCnameResponseBody& setCnameDatas(const DescribeDomainCnameResponseBody::CnameDatas & cnameDatas) { DARABONBA_PTR_SET_VALUE(cnameDatas_, cnameDatas) };
    inline DescribeDomainCnameResponseBody& setCnameDatas(DescribeDomainCnameResponseBody::CnameDatas && cnameDatas) { DARABONBA_PTR_SET_RVALUE(cnameDatas_, cnameDatas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainCnameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeDomainCnameResponseBody::CnameDatas> cnameDatas_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
