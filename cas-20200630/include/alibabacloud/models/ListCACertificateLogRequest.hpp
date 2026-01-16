// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCACERTIFICATELOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCACERTIFICATELOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class ListCACertificateLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCACertificateLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Identifier, identifier_);
    };
    friend void from_json(const Darabonba::Json& j, ListCACertificateLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
    };
    ListCACertificateLogRequest() = default ;
    ListCACertificateLogRequest(const ListCACertificateLogRequest &) = default ;
    ListCACertificateLogRequest(ListCACertificateLogRequest &&) = default ;
    ListCACertificateLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCACertificateLogRequest() = default ;
    ListCACertificateLogRequest& operator=(const ListCACertificateLogRequest &) = default ;
    ListCACertificateLogRequest& operator=(ListCACertificateLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identifier_ == nullptr; };
    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline ListCACertificateLogRequest& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


  protected:
    // This parameter is required.
    shared_ptr<string> identifier_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
