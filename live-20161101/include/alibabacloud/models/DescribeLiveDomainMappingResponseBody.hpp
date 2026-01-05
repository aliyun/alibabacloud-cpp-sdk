// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINMAPPINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINMAPPINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainMappingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainMappingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveDomainModels, liveDomainModels_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainMappingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveDomainModels, liveDomainModels_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveDomainMappingResponseBody() = default ;
    DescribeLiveDomainMappingResponseBody(const DescribeLiveDomainMappingResponseBody &) = default ;
    DescribeLiveDomainMappingResponseBody(DescribeLiveDomainMappingResponseBody &&) = default ;
    DescribeLiveDomainMappingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainMappingResponseBody() = default ;
    DescribeLiveDomainMappingResponseBody& operator=(const DescribeLiveDomainMappingResponseBody &) = default ;
    DescribeLiveDomainMappingResponseBody& operator=(DescribeLiveDomainMappingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LiveDomainModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LiveDomainModels& obj) { 
        DARABONBA_PTR_TO_JSON(LiveDomainModel, liveDomainModel_);
      };
      friend void from_json(const Darabonba::Json& j, LiveDomainModels& obj) { 
        DARABONBA_PTR_FROM_JSON(LiveDomainModel, liveDomainModel_);
      };
      LiveDomainModels() = default ;
      LiveDomainModels(const LiveDomainModels &) = default ;
      LiveDomainModels(LiveDomainModels &&) = default ;
      LiveDomainModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LiveDomainModels() = default ;
      LiveDomainModels& operator=(const LiveDomainModels &) = default ;
      LiveDomainModels& operator=(LiveDomainModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LiveDomainModel : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LiveDomainModel& obj) { 
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, LiveDomainModel& obj) { 
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        LiveDomainModel() = default ;
        LiveDomainModel(const LiveDomainModel &) = default ;
        LiveDomainModel(LiveDomainModel &&) = default ;
        LiveDomainModel(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LiveDomainModel() = default ;
        LiveDomainModel& operator=(const LiveDomainModel &) = default ;
        LiveDomainModel& operator=(LiveDomainModel &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->domainName_ == nullptr
        && this->type_ == nullptr; };
        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline LiveDomainModel& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline LiveDomainModel& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The domain name to which the queried domain name is mapped.
        shared_ptr<string> domainName_ {};
        // The type of the queried domain name. Valid values:
        // 
        // *   **vhost**: main streaming domain
        // *   **publish**: ingest domain
        // *   **play**: sub-streaming domain
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->liveDomainModel_ == nullptr; };
      // liveDomainModel Field Functions 
      bool hasLiveDomainModel() const { return this->liveDomainModel_ != nullptr;};
      void deleteLiveDomainModel() { this->liveDomainModel_ = nullptr;};
      inline const vector<LiveDomainModels::LiveDomainModel> & getLiveDomainModel() const { DARABONBA_PTR_GET_CONST(liveDomainModel_, vector<LiveDomainModels::LiveDomainModel>) };
      inline vector<LiveDomainModels::LiveDomainModel> getLiveDomainModel() { DARABONBA_PTR_GET(liveDomainModel_, vector<LiveDomainModels::LiveDomainModel>) };
      inline LiveDomainModels& setLiveDomainModel(const vector<LiveDomainModels::LiveDomainModel> & liveDomainModel) { DARABONBA_PTR_SET_VALUE(liveDomainModel_, liveDomainModel) };
      inline LiveDomainModels& setLiveDomainModel(vector<LiveDomainModels::LiveDomainModel> && liveDomainModel) { DARABONBA_PTR_SET_RVALUE(liveDomainModel_, liveDomainModel) };


    protected:
      shared_ptr<vector<LiveDomainModels::LiveDomainModel>> liveDomainModel_ {};
    };

    virtual bool empty() const override { return this->liveDomainModels_ == nullptr
        && this->requestId_ == nullptr; };
    // liveDomainModels Field Functions 
    bool hasLiveDomainModels() const { return this->liveDomainModels_ != nullptr;};
    void deleteLiveDomainModels() { this->liveDomainModels_ = nullptr;};
    inline const DescribeLiveDomainMappingResponseBody::LiveDomainModels & getLiveDomainModels() const { DARABONBA_PTR_GET_CONST(liveDomainModels_, DescribeLiveDomainMappingResponseBody::LiveDomainModels) };
    inline DescribeLiveDomainMappingResponseBody::LiveDomainModels getLiveDomainModels() { DARABONBA_PTR_GET(liveDomainModels_, DescribeLiveDomainMappingResponseBody::LiveDomainModels) };
    inline DescribeLiveDomainMappingResponseBody& setLiveDomainModels(const DescribeLiveDomainMappingResponseBody::LiveDomainModels & liveDomainModels) { DARABONBA_PTR_SET_VALUE(liveDomainModels_, liveDomainModels) };
    inline DescribeLiveDomainMappingResponseBody& setLiveDomainModels(DescribeLiveDomainMappingResponseBody::LiveDomainModels && liveDomainModels) { DARABONBA_PTR_SET_RVALUE(liveDomainModels_, liveDomainModels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDomainMappingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The mappings of the queried domain name.
    shared_ptr<DescribeLiveDomainMappingResponseBody::LiveDomainModels> liveDomainModels_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
