// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKYUUBITOKENRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEKYUUBITOKENRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class CreateKyuubiTokenResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKyuubiTokenResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(tokenId, tokenId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKyuubiTokenResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(tokenId, tokenId_);
    };
    CreateKyuubiTokenResponseBodyData() = default ;
    CreateKyuubiTokenResponseBodyData(const CreateKyuubiTokenResponseBodyData &) = default ;
    CreateKyuubiTokenResponseBodyData(CreateKyuubiTokenResponseBodyData &&) = default ;
    CreateKyuubiTokenResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKyuubiTokenResponseBodyData() = default ;
    CreateKyuubiTokenResponseBodyData& operator=(const CreateKyuubiTokenResponseBodyData &) = default ;
    CreateKyuubiTokenResponseBodyData& operator=(CreateKyuubiTokenResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tokenId_ == nullptr; };
    // tokenId Field Functions 
    bool hasTokenId() const { return this->tokenId_ != nullptr;};
    void deleteTokenId() { this->tokenId_ = nullptr;};
    inline string tokenId() const { DARABONBA_PTR_GET_DEFAULT(tokenId_, "") };
    inline CreateKyuubiTokenResponseBodyData& setTokenId(string tokenId) { DARABONBA_PTR_SET_VALUE(tokenId_, tokenId) };


  protected:
    // Token ID。
    std::shared_ptr<string> tokenId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
