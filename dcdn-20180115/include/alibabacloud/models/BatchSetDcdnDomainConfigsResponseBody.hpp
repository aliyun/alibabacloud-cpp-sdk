// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHSETDCDNDOMAINCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHSETDCDNDOMAINCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class BatchSetDcdnDomainConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchSetDcdnDomainConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainConfigList, domainConfigList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchSetDcdnDomainConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainConfigList, domainConfigList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    BatchSetDcdnDomainConfigsResponseBody() = default ;
    BatchSetDcdnDomainConfigsResponseBody(const BatchSetDcdnDomainConfigsResponseBody &) = default ;
    BatchSetDcdnDomainConfigsResponseBody(BatchSetDcdnDomainConfigsResponseBody &&) = default ;
    BatchSetDcdnDomainConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchSetDcdnDomainConfigsResponseBody() = default ;
    BatchSetDcdnDomainConfigsResponseBody& operator=(const BatchSetDcdnDomainConfigsResponseBody &) = default ;
    BatchSetDcdnDomainConfigsResponseBody& operator=(BatchSetDcdnDomainConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainConfigList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainConfigList& obj) { 
        DARABONBA_PTR_TO_JSON(DomainConfigModel, domainConfigModel_);
      };
      friend void from_json(const Darabonba::Json& j, DomainConfigList& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainConfigModel, domainConfigModel_);
      };
      DomainConfigList() = default ;
      DomainConfigList(const DomainConfigList &) = default ;
      DomainConfigList(DomainConfigList &&) = default ;
      DomainConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainConfigList() = default ;
      DomainConfigList& operator=(const DomainConfigList &) = default ;
      DomainConfigList& operator=(DomainConfigList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DomainConfigModel : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DomainConfigModel& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigId, configId_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
        };
        friend void from_json(const Darabonba::Json& j, DomainConfigModel& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
        };
        DomainConfigModel() = default ;
        DomainConfigModel(const DomainConfigModel &) = default ;
        DomainConfigModel(DomainConfigModel &&) = default ;
        DomainConfigModel(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DomainConfigModel() = default ;
        DomainConfigModel& operator=(const DomainConfigModel &) = default ;
        DomainConfigModel& operator=(DomainConfigModel &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->configId_ == nullptr
        && this->domainName_ == nullptr && this->functionName_ == nullptr; };
        // configId Field Functions 
        bool hasConfigId() const { return this->configId_ != nullptr;};
        void deleteConfigId() { this->configId_ = nullptr;};
        inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
        inline DomainConfigModel& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline DomainConfigModel& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // functionName Field Functions 
        bool hasFunctionName() const { return this->functionName_ != nullptr;};
        void deleteFunctionName() { this->functionName_ = nullptr;};
        inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
        inline DomainConfigModel& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


      protected:
        // The ID of the configuration.
        shared_ptr<int64_t> configId_ {};
        // The domain name.
        shared_ptr<string> domainName_ {};
        // The name of the feature.
        shared_ptr<string> functionName_ {};
      };

      virtual bool empty() const override { return this->domainConfigModel_ == nullptr; };
      // domainConfigModel Field Functions 
      bool hasDomainConfigModel() const { return this->domainConfigModel_ != nullptr;};
      void deleteDomainConfigModel() { this->domainConfigModel_ = nullptr;};
      inline const vector<DomainConfigList::DomainConfigModel> & getDomainConfigModel() const { DARABONBA_PTR_GET_CONST(domainConfigModel_, vector<DomainConfigList::DomainConfigModel>) };
      inline vector<DomainConfigList::DomainConfigModel> getDomainConfigModel() { DARABONBA_PTR_GET(domainConfigModel_, vector<DomainConfigList::DomainConfigModel>) };
      inline DomainConfigList& setDomainConfigModel(const vector<DomainConfigList::DomainConfigModel> & domainConfigModel) { DARABONBA_PTR_SET_VALUE(domainConfigModel_, domainConfigModel) };
      inline DomainConfigList& setDomainConfigModel(vector<DomainConfigList::DomainConfigModel> && domainConfigModel) { DARABONBA_PTR_SET_RVALUE(domainConfigModel_, domainConfigModel) };


    protected:
      shared_ptr<vector<DomainConfigList::DomainConfigModel>> domainConfigModel_ {};
    };

    virtual bool empty() const override { return this->domainConfigList_ == nullptr
        && this->requestId_ == nullptr; };
    // domainConfigList Field Functions 
    bool hasDomainConfigList() const { return this->domainConfigList_ != nullptr;};
    void deleteDomainConfigList() { this->domainConfigList_ = nullptr;};
    inline const BatchSetDcdnDomainConfigsResponseBody::DomainConfigList & getDomainConfigList() const { DARABONBA_PTR_GET_CONST(domainConfigList_, BatchSetDcdnDomainConfigsResponseBody::DomainConfigList) };
    inline BatchSetDcdnDomainConfigsResponseBody::DomainConfigList getDomainConfigList() { DARABONBA_PTR_GET(domainConfigList_, BatchSetDcdnDomainConfigsResponseBody::DomainConfigList) };
    inline BatchSetDcdnDomainConfigsResponseBody& setDomainConfigList(const BatchSetDcdnDomainConfigsResponseBody::DomainConfigList & domainConfigList) { DARABONBA_PTR_SET_VALUE(domainConfigList_, domainConfigList) };
    inline BatchSetDcdnDomainConfigsResponseBody& setDomainConfigList(BatchSetDcdnDomainConfigsResponseBody::DomainConfigList && domainConfigList) { DARABONBA_PTR_SET_RVALUE(domainConfigList_, domainConfigList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchSetDcdnDomainConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of domain configurations.
    shared_ptr<BatchSetDcdnDomainConfigsResponseBody::DomainConfigList> domainConfigList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
