// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIVYCOMPUTETOKENRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATELIVYCOMPUTETOKENRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class CreateLivyComputeTokenResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLivyComputeTokenResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(tokenId, tokenId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLivyComputeTokenResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(tokenId, tokenId_);
    };
    CreateLivyComputeTokenResponseBodyData() = default ;
    CreateLivyComputeTokenResponseBodyData(const CreateLivyComputeTokenResponseBodyData &) = default ;
    CreateLivyComputeTokenResponseBodyData(CreateLivyComputeTokenResponseBodyData &&) = default ;
    CreateLivyComputeTokenResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLivyComputeTokenResponseBodyData() = default ;
    CreateLivyComputeTokenResponseBodyData& operator=(const CreateLivyComputeTokenResponseBodyData &) = default ;
    CreateLivyComputeTokenResponseBodyData& operator=(CreateLivyComputeTokenResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tokenId_ != nullptr; };
    // tokenId Field Functions 
    bool hasTokenId() const { return this->tokenId_ != nullptr;};
    void deleteTokenId() { this->tokenId_ = nullptr;};
    inline string tokenId() const { DARABONBA_PTR_GET_DEFAULT(tokenId_, "") };
    inline CreateLivyComputeTokenResponseBodyData& setTokenId(string tokenId) { DARABONBA_PTR_SET_VALUE(tokenId_, tokenId) };


  protected:
    // Token ID。
    std::shared_ptr<string> tokenId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
