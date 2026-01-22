// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLAUDITINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLAUDITINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeSqlAuditInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSqlAuditInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSqlAuditInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSqlAuditInfoResponseBody() = default ;
    DescribeSqlAuditInfoResponseBody(const DescribeSqlAuditInfoResponseBody &) = default ;
    DescribeSqlAuditInfoResponseBody(DescribeSqlAuditInfoResponseBody &&) = default ;
    DescribeSqlAuditInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSqlAuditInfoResponseBody() = default ;
    DescribeSqlAuditInfoResponseBody& operator=(const DescribeSqlAuditInfoResponseBody &) = default ;
    DescribeSqlAuditInfoResponseBody& operator=(DescribeSqlAuditInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(IsEnabled, isEnabled_);
        DARABONBA_PTR_TO_JSON(SLSLogStore, SLSLogStore_);
        DARABONBA_PTR_TO_JSON(SLSProject, SLSProject_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(IsEnabled, isEnabled_);
        DARABONBA_PTR_FROM_JSON(SLSLogStore, SLSLogStore_);
        DARABONBA_PTR_FROM_JSON(SLSProject, SLSProject_);
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
      virtual bool empty() const override { return this->isEnabled_ == nullptr
        && this->SLSLogStore_ == nullptr && this->SLSProject_ == nullptr; };
      // isEnabled Field Functions 
      bool hasIsEnabled() const { return this->isEnabled_ != nullptr;};
      void deleteIsEnabled() { this->isEnabled_ = nullptr;};
      inline bool getIsEnabled() const { DARABONBA_PTR_GET_DEFAULT(isEnabled_, false) };
      inline Data& setIsEnabled(bool isEnabled) { DARABONBA_PTR_SET_VALUE(isEnabled_, isEnabled) };


      // SLSLogStore Field Functions 
      bool hasSLSLogStore() const { return this->SLSLogStore_ != nullptr;};
      void deleteSLSLogStore() { this->SLSLogStore_ = nullptr;};
      inline string getSLSLogStore() const { DARABONBA_PTR_GET_DEFAULT(SLSLogStore_, "") };
      inline Data& setSLSLogStore(string SLSLogStore) { DARABONBA_PTR_SET_VALUE(SLSLogStore_, SLSLogStore) };


      // SLSProject Field Functions 
      bool hasSLSProject() const { return this->SLSProject_ != nullptr;};
      void deleteSLSProject() { this->SLSProject_ = nullptr;};
      inline string getSLSProject() const { DARABONBA_PTR_GET_DEFAULT(SLSProject_, "") };
      inline Data& setSLSProject(string SLSProject) { DARABONBA_PTR_SET_VALUE(SLSProject_, SLSProject) };


    protected:
      shared_ptr<bool> isEnabled_ {};
      shared_ptr<string> SLSLogStore_ {};
      shared_ptr<string> SLSProject_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeSqlAuditInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeSqlAuditInfoResponseBody::Data) };
    inline DescribeSqlAuditInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeSqlAuditInfoResponseBody::Data) };
    inline DescribeSqlAuditInfoResponseBody& setData(const DescribeSqlAuditInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSqlAuditInfoResponseBody& setData(DescribeSqlAuditInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSqlAuditInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeSqlAuditInfoResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
