// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPUBLICNETWORKRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPUBLICNETWORKRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdatePublicNetworkResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePublicNetworkResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(enablePublic, enablePublic_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePublicNetworkResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(enablePublic, enablePublic_);
    };
    UpdatePublicNetworkResponseBodyResult() = default ;
    UpdatePublicNetworkResponseBodyResult(const UpdatePublicNetworkResponseBodyResult &) = default ;
    UpdatePublicNetworkResponseBodyResult(UpdatePublicNetworkResponseBodyResult &&) = default ;
    UpdatePublicNetworkResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePublicNetworkResponseBodyResult() = default ;
    UpdatePublicNetworkResponseBodyResult& operator=(const UpdatePublicNetworkResponseBodyResult &) = default ;
    UpdatePublicNetworkResponseBodyResult& operator=(UpdatePublicNetworkResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enablePublic_ != nullptr; };
    // enablePublic Field Functions 
    bool hasEnablePublic() const { return this->enablePublic_ != nullptr;};
    void deleteEnablePublic() { this->enablePublic_ = nullptr;};
    inline bool enablePublic() const { DARABONBA_PTR_GET_DEFAULT(enablePublic_, false) };
    inline UpdatePublicNetworkResponseBodyResult& setEnablePublic(bool enablePublic) { DARABONBA_PTR_SET_VALUE(enablePublic_, enablePublic) };


  protected:
    // The status of the public network access switch.
    std::shared_ptr<bool> enablePublic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
