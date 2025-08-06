// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEKEYPAIRSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEKEYPAIRSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DeleteKeyPairsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteKeyPairsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KeyPairIds, keyPairIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteKeyPairsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyPairIds, keyPairIds_);
    };
    DeleteKeyPairsRequest() = default ;
    DeleteKeyPairsRequest(const DeleteKeyPairsRequest &) = default ;
    DeleteKeyPairsRequest(DeleteKeyPairsRequest &&) = default ;
    DeleteKeyPairsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteKeyPairsRequest() = default ;
    DeleteKeyPairsRequest& operator=(const DeleteKeyPairsRequest &) = default ;
    DeleteKeyPairsRequest& operator=(DeleteKeyPairsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyPairIds_ != nullptr; };
    // keyPairIds Field Functions 
    bool hasKeyPairIds() const { return this->keyPairIds_ != nullptr;};
    void deleteKeyPairIds() { this->keyPairIds_ = nullptr;};
    inline const vector<string> & keyPairIds() const { DARABONBA_PTR_GET_CONST(keyPairIds_, vector<string>) };
    inline vector<string> keyPairIds() { DARABONBA_PTR_GET(keyPairIds_, vector<string>) };
    inline DeleteKeyPairsRequest& setKeyPairIds(const vector<string> & keyPairIds) { DARABONBA_PTR_SET_VALUE(keyPairIds_, keyPairIds) };
    inline DeleteKeyPairsRequest& setKeyPairIds(vector<string> && keyPairIds) { DARABONBA_PTR_SET_RVALUE(keyPairIds_, keyPairIds) };


  protected:
    // The IDs of the ADB key pairs.
    std::shared_ptr<vector<string>> keyPairIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
