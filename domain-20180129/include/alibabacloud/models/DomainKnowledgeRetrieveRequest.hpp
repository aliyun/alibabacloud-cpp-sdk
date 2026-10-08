// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOMAINKNOWLEDGERETRIEVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOMAINKNOWLEDGERETRIEVEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class DomainKnowledgeRetrieveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DomainKnowledgeRetrieveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GlobalTopN, globalTopN_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(Site, site_);
    };
    friend void from_json(const Darabonba::Json& j, DomainKnowledgeRetrieveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GlobalTopN, globalTopN_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(Site, site_);
    };
    DomainKnowledgeRetrieveRequest() = default ;
    DomainKnowledgeRetrieveRequest(const DomainKnowledgeRetrieveRequest &) = default ;
    DomainKnowledgeRetrieveRequest(DomainKnowledgeRetrieveRequest &&) = default ;
    DomainKnowledgeRetrieveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DomainKnowledgeRetrieveRequest() = default ;
    DomainKnowledgeRetrieveRequest& operator=(const DomainKnowledgeRetrieveRequest &) = default ;
    DomainKnowledgeRetrieveRequest& operator=(DomainKnowledgeRetrieveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->globalTopN_ == nullptr
        && this->keyword_ == nullptr && this->site_ == nullptr; };
    // globalTopN Field Functions 
    bool hasGlobalTopN() const { return this->globalTopN_ != nullptr;};
    void deleteGlobalTopN() { this->globalTopN_ = nullptr;};
    inline int32_t getGlobalTopN() const { DARABONBA_PTR_GET_DEFAULT(globalTopN_, 0) };
    inline DomainKnowledgeRetrieveRequest& setGlobalTopN(int32_t globalTopN) { DARABONBA_PTR_SET_VALUE(globalTopN_, globalTopN) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline DomainKnowledgeRetrieveRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // site Field Functions 
    bool hasSite() const { return this->site_ != nullptr;};
    void deleteSite() { this->site_ = nullptr;};
    inline string getSite() const { DARABONBA_PTR_GET_DEFAULT(site_, "") };
    inline DomainKnowledgeRetrieveRequest& setSite(string site) { DARABONBA_PTR_SET_VALUE(site_, site) };


  protected:
    // Le nombre de résultats à renvoyer.
    shared_ptr<int32_t> globalTopN_ {};
    // Les mots-clés à récupérer.
    // 
    // This parameter is required.
    shared_ptr<string> keyword_ {};
    // Les sites de la base de connaissances à interroger, y compris cn pour le national, intl pour l\\"international et all pour tous.
    shared_ptr<string> site_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
