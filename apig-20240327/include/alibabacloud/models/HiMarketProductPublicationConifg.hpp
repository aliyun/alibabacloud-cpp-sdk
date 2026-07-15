// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HIMARKETPRODUCTPUBLICATIONCONIFG_HPP_
#define ALIBABACLOUD_MODELS_HIMARKETPRODUCTPUBLICATIONCONIFG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HiMarketProductPublicationConifg : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HiMarketProductPublicationConifg& obj) { 
      DARABONBA_PTR_TO_JSON(publicationId, publicationId_);
    };
    friend void from_json(const Darabonba::Json& j, HiMarketProductPublicationConifg& obj) { 
      DARABONBA_PTR_FROM_JSON(publicationId, publicationId_);
    };
    HiMarketProductPublicationConifg() = default ;
    HiMarketProductPublicationConifg(const HiMarketProductPublicationConifg &) = default ;
    HiMarketProductPublicationConifg(HiMarketProductPublicationConifg &&) = default ;
    HiMarketProductPublicationConifg(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HiMarketProductPublicationConifg() = default ;
    HiMarketProductPublicationConifg& operator=(const HiMarketProductPublicationConifg &) = default ;
    HiMarketProductPublicationConifg& operator=(HiMarketProductPublicationConifg &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->publicationId_ == nullptr; };
    // publicationId Field Functions 
    bool hasPublicationId() const { return this->publicationId_ != nullptr;};
    void deletePublicationId() { this->publicationId_ = nullptr;};
    inline string getPublicationId() const { DARABONBA_PTR_GET_DEFAULT(publicationId_, "") };
    inline HiMarketProductPublicationConifg& setPublicationId(string publicationId) { DARABONBA_PTR_SET_VALUE(publicationId_, publicationId) };


  protected:
    // The publication ID.
    shared_ptr<string> publicationId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
