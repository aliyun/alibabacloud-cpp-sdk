// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCIPHERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCIPHERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListCiphersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCiphersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CiphersGroup, ciphersGroup_);
    };
    friend void from_json(const Darabonba::Json& j, ListCiphersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CiphersGroup, ciphersGroup_);
    };
    ListCiphersRequest() = default ;
    ListCiphersRequest(const ListCiphersRequest &) = default ;
    ListCiphersRequest(ListCiphersRequest &&) = default ;
    ListCiphersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCiphersRequest() = default ;
    ListCiphersRequest& operator=(const ListCiphersRequest &) = default ;
    ListCiphersRequest& operator=(ListCiphersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ciphersGroup_ != nullptr; };
    // ciphersGroup Field Functions 
    bool hasCiphersGroup() const { return this->ciphersGroup_ != nullptr;};
    void deleteCiphersGroup() { this->ciphersGroup_ = nullptr;};
    inline string ciphersGroup() const { DARABONBA_PTR_GET_DEFAULT(ciphersGroup_, "") };
    inline ListCiphersRequest& setCiphersGroup(string ciphersGroup) { DARABONBA_PTR_SET_VALUE(ciphersGroup_, ciphersGroup) };


  protected:
    // The name of the cipher suite group, which can be: all, strict, custom.
    // 
    // This parameter is required.
    std::shared_ptr<string> ciphersGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
