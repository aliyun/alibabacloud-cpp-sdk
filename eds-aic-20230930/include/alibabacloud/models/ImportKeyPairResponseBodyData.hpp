// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTKEYPAIRRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_IMPORTKEYPAIRRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ImportKeyPairResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportKeyPairResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(KeyPairId, keyPairId_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
    };
    friend void from_json(const Darabonba::Json& j, ImportKeyPairResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(KeyPairId, keyPairId_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
    };
    ImportKeyPairResponseBodyData() = default ;
    ImportKeyPairResponseBodyData(const ImportKeyPairResponseBodyData &) = default ;
    ImportKeyPairResponseBodyData(ImportKeyPairResponseBodyData &&) = default ;
    ImportKeyPairResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportKeyPairResponseBodyData() = default ;
    ImportKeyPairResponseBodyData& operator=(const ImportKeyPairResponseBodyData &) = default ;
    ImportKeyPairResponseBodyData& operator=(ImportKeyPairResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gmtCreated_ == nullptr
        && return this->keyPairId_ == nullptr && return this->keyPairName_ == nullptr; };
    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline ImportKeyPairResponseBodyData& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // keyPairId Field Functions 
    bool hasKeyPairId() const { return this->keyPairId_ != nullptr;};
    void deleteKeyPairId() { this->keyPairId_ = nullptr;};
    inline string keyPairId() const { DARABONBA_PTR_GET_DEFAULT(keyPairId_, "") };
    inline ImportKeyPairResponseBodyData& setKeyPairId(string keyPairId) { DARABONBA_PTR_SET_VALUE(keyPairId_, keyPairId) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string keyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline ImportKeyPairResponseBodyData& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


  protected:
    // The time when the ADB key pair was created.
    std::shared_ptr<string> gmtCreated_ = nullptr;
    // The ID of the ADB key pair.
    std::shared_ptr<string> keyPairId_ = nullptr;
    // The name of the ADB key pair.
    std::shared_ptr<string> keyPairName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
