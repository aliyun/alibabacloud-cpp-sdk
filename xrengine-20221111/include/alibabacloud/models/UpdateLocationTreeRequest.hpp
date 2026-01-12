// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELOCATIONTREEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELOCATIONTREEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class UpdateLocationTreeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLocationTreeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(JwtToken, jwtToken_);
      DARABONBA_PTR_TO_JSON(TreeConfig, treeConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLocationTreeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(JwtToken, jwtToken_);
      DARABONBA_PTR_FROM_JSON(TreeConfig, treeConfig_);
    };
    UpdateLocationTreeRequest() = default ;
    UpdateLocationTreeRequest(const UpdateLocationTreeRequest &) = default ;
    UpdateLocationTreeRequest(UpdateLocationTreeRequest &&) = default ;
    UpdateLocationTreeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLocationTreeRequest() = default ;
    UpdateLocationTreeRequest& operator=(const UpdateLocationTreeRequest &) = default ;
    UpdateLocationTreeRequest& operator=(UpdateLocationTreeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->jwtToken_ == nullptr && this->treeConfig_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateLocationTreeRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jwtToken Field Functions 
    bool hasJwtToken() const { return this->jwtToken_ != nullptr;};
    void deleteJwtToken() { this->jwtToken_ = nullptr;};
    inline string getJwtToken() const { DARABONBA_PTR_GET_DEFAULT(jwtToken_, "") };
    inline UpdateLocationTreeRequest& setJwtToken(string jwtToken) { DARABONBA_PTR_SET_VALUE(jwtToken_, jwtToken) };


    // treeConfig Field Functions 
    bool hasTreeConfig() const { return this->treeConfig_ != nullptr;};
    void deleteTreeConfig() { this->treeConfig_ = nullptr;};
    inline string getTreeConfig() const { DARABONBA_PTR_GET_DEFAULT(treeConfig_, "") };
    inline UpdateLocationTreeRequest& setTreeConfig(string treeConfig) { DARABONBA_PTR_SET_VALUE(treeConfig_, treeConfig) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> jwtToken_ {};
    shared_ptr<string> treeConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
