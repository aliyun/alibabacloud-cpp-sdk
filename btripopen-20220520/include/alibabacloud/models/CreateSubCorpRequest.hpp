// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESUBCORPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESUBCORPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CreateSubCorpRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSubCorpRequest& obj) { 
      DARABONBA_PTR_TO_JSON(outer_corp_id, outerCorpId_);
      DARABONBA_PTR_TO_JSON(outer_corp_name, outerCorpName_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSubCorpRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(outer_corp_id, outerCorpId_);
      DARABONBA_PTR_FROM_JSON(outer_corp_name, outerCorpName_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    CreateSubCorpRequest() = default ;
    CreateSubCorpRequest(const CreateSubCorpRequest &) = default ;
    CreateSubCorpRequest(CreateSubCorpRequest &&) = default ;
    CreateSubCorpRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSubCorpRequest() = default ;
    CreateSubCorpRequest& operator=(const CreateSubCorpRequest &) = default ;
    CreateSubCorpRequest& operator=(CreateSubCorpRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->outerCorpId_ != nullptr
        && this->outerCorpName_ != nullptr && this->userId_ != nullptr; };
    // outerCorpId Field Functions 
    bool hasOuterCorpId() const { return this->outerCorpId_ != nullptr;};
    void deleteOuterCorpId() { this->outerCorpId_ = nullptr;};
    inline string outerCorpId() const { DARABONBA_PTR_GET_DEFAULT(outerCorpId_, "") };
    inline CreateSubCorpRequest& setOuterCorpId(string outerCorpId) { DARABONBA_PTR_SET_VALUE(outerCorpId_, outerCorpId) };


    // outerCorpName Field Functions 
    bool hasOuterCorpName() const { return this->outerCorpName_ != nullptr;};
    void deleteOuterCorpName() { this->outerCorpName_ = nullptr;};
    inline string outerCorpName() const { DARABONBA_PTR_GET_DEFAULT(outerCorpName_, "") };
    inline CreateSubCorpRequest& setOuterCorpName(string outerCorpName) { DARABONBA_PTR_SET_VALUE(outerCorpName_, outerCorpName) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CreateSubCorpRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> outerCorpId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outerCorpName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
