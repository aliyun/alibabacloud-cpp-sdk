// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORGANDFACTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETORGANDFACTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetOrgAndFactoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrgAndFactoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetOrgAndFactoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetOrgAndFactoryResponseBody() = default ;
    GetOrgAndFactoryResponseBody(const GetOrgAndFactoryResponseBody &) = default ;
    GetOrgAndFactoryResponseBody(GetOrgAndFactoryResponseBody &&) = default ;
    GetOrgAndFactoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrgAndFactoryResponseBody() = default ;
    GetOrgAndFactoryResponseBody& operator=(const GetOrgAndFactoryResponseBody &) = default ;
    GetOrgAndFactoryResponseBody& operator=(GetOrgAndFactoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(aliyunPk, aliyunPk_);
        DARABONBA_PTR_TO_JSON(factoryList, factoryList_);
        DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
        DARABONBA_PTR_TO_JSON(organizationName, organizationName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(aliyunPk, aliyunPk_);
        DARABONBA_PTR_FROM_JSON(factoryList, factoryList_);
        DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
        DARABONBA_PTR_FROM_JSON(organizationName, organizationName_);
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
      class FactoryList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FactoryList& obj) { 
          DARABONBA_PTR_TO_JSON(factoryId, factoryId_);
          DARABONBA_PTR_TO_JSON(factoryName, factoryName_);
        };
        friend void from_json(const Darabonba::Json& j, FactoryList& obj) { 
          DARABONBA_PTR_FROM_JSON(factoryId, factoryId_);
          DARABONBA_PTR_FROM_JSON(factoryName, factoryName_);
        };
        FactoryList() = default ;
        FactoryList(const FactoryList &) = default ;
        FactoryList(FactoryList &&) = default ;
        FactoryList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FactoryList() = default ;
        FactoryList& operator=(const FactoryList &) = default ;
        FactoryList& operator=(FactoryList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->factoryId_ == nullptr
        && this->factoryName_ == nullptr; };
        // factoryId Field Functions 
        bool hasFactoryId() const { return this->factoryId_ != nullptr;};
        void deleteFactoryId() { this->factoryId_ = nullptr;};
        inline string getFactoryId() const { DARABONBA_PTR_GET_DEFAULT(factoryId_, "") };
        inline FactoryList& setFactoryId(string factoryId) { DARABONBA_PTR_SET_VALUE(factoryId_, factoryId) };


        // factoryName Field Functions 
        bool hasFactoryName() const { return this->factoryName_ != nullptr;};
        void deleteFactoryName() { this->factoryName_ = nullptr;};
        inline string getFactoryName() const { DARABONBA_PTR_GET_DEFAULT(factoryName_, "") };
        inline FactoryList& setFactoryName(string factoryName) { DARABONBA_PTR_SET_VALUE(factoryName_, factoryName) };


      protected:
        // The site ID.
        shared_ptr<string> factoryId_ {};
        // The site name.
        shared_ptr<string> factoryName_ {};
      };

      virtual bool empty() const override { return this->aliyunPk_ == nullptr
        && this->factoryList_ == nullptr && this->organizationId_ == nullptr && this->organizationName_ == nullptr; };
      // aliyunPk Field Functions 
      bool hasAliyunPk() const { return this->aliyunPk_ != nullptr;};
      void deleteAliyunPk() { this->aliyunPk_ = nullptr;};
      inline string getAliyunPk() const { DARABONBA_PTR_GET_DEFAULT(aliyunPk_, "") };
      inline Data& setAliyunPk(string aliyunPk) { DARABONBA_PTR_SET_VALUE(aliyunPk_, aliyunPk) };


      // factoryList Field Functions 
      bool hasFactoryList() const { return this->factoryList_ != nullptr;};
      void deleteFactoryList() { this->factoryList_ = nullptr;};
      inline const vector<Data::FactoryList> & getFactoryList() const { DARABONBA_PTR_GET_CONST(factoryList_, vector<Data::FactoryList>) };
      inline vector<Data::FactoryList> getFactoryList() { DARABONBA_PTR_GET(factoryList_, vector<Data::FactoryList>) };
      inline Data& setFactoryList(const vector<Data::FactoryList> & factoryList) { DARABONBA_PTR_SET_VALUE(factoryList_, factoryList) };
      inline Data& setFactoryList(vector<Data::FactoryList> && factoryList) { DARABONBA_PTR_SET_RVALUE(factoryList_, factoryList) };


      // organizationId Field Functions 
      bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
      void deleteOrganizationId() { this->organizationId_ = nullptr;};
      inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
      inline Data& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


      // organizationName Field Functions 
      bool hasOrganizationName() const { return this->organizationName_ != nullptr;};
      void deleteOrganizationName() { this->organizationName_ = nullptr;};
      inline string getOrganizationName() const { DARABONBA_PTR_GET_DEFAULT(organizationName_, "") };
      inline Data& setOrganizationName(string organizationName) { DARABONBA_PTR_SET_VALUE(organizationName_, organizationName) };


    protected:
      // The Alibaba Cloud account ID.
      shared_ptr<string> aliyunPk_ {};
      // The sites.
      shared_ptr<vector<Data::FactoryList>> factoryList_ {};
      // The enterprise ID.
      shared_ptr<string> organizationId_ {};
      // The enterprise name.
      shared_ptr<string> organizationName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetOrgAndFactoryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetOrgAndFactoryResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetOrgAndFactoryResponseBody::Data>) };
    inline vector<GetOrgAndFactoryResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetOrgAndFactoryResponseBody::Data>) };
    inline GetOrgAndFactoryResponseBody& setData(const vector<GetOrgAndFactoryResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetOrgAndFactoryResponseBody& setData(vector<GetOrgAndFactoryResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline GetOrgAndFactoryResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOrgAndFactoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetOrgAndFactoryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The code returned for the request.
    shared_ptr<string> code_ {};
    // data
    shared_ptr<vector<GetOrgAndFactoryResponseBody::Data>> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
