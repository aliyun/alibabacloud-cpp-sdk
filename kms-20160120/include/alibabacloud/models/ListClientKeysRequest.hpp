// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLIENTKEYSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLIENTKEYSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListClientKeysRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClientKeysRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AapName, aapName_);
    };
    friend void from_json(const Darabonba::Json& j, ListClientKeysRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AapName, aapName_);
    };
    ListClientKeysRequest() = default ;
    ListClientKeysRequest(const ListClientKeysRequest &) = default ;
    ListClientKeysRequest(ListClientKeysRequest &&) = default ;
    ListClientKeysRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClientKeysRequest() = default ;
    ListClientKeysRequest& operator=(const ListClientKeysRequest &) = default ;
    ListClientKeysRequest& operator=(ListClientKeysRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aapName_ == nullptr; };
    // aapName Field Functions 
    bool hasAapName() const { return this->aapName_ != nullptr;};
    void deleteAapName() { this->aapName_ = nullptr;};
    inline string aapName() const { DARABONBA_PTR_GET_DEFAULT(aapName_, "") };
    inline ListClientKeysRequest& setAapName(string aapName) { DARABONBA_PTR_SET_VALUE(aapName_, aapName) };


  protected:
    // The name of the application access point (AAP).
    std::shared_ptr<string> aapName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
