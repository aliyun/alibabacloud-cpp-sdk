// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESESSIONNETWORKCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATESESSIONNETWORKCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class UpdateSessionNetworkConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSessionNetworkConfig& obj) { 
      DARABONBA_PTR_TO_JSON(allowOut, allowOut_);
      DARABONBA_PTR_TO_JSON(denyOut, denyOut_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSessionNetworkConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(allowOut, allowOut_);
      DARABONBA_PTR_FROM_JSON(denyOut, denyOut_);
    };
    UpdateSessionNetworkConfig() = default ;
    UpdateSessionNetworkConfig(const UpdateSessionNetworkConfig &) = default ;
    UpdateSessionNetworkConfig(UpdateSessionNetworkConfig &&) = default ;
    UpdateSessionNetworkConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSessionNetworkConfig() = default ;
    UpdateSessionNetworkConfig& operator=(const UpdateSessionNetworkConfig &) = default ;
    UpdateSessionNetworkConfig& operator=(UpdateSessionNetworkConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowOut_ == nullptr
        && this->denyOut_ == nullptr; };
    // allowOut Field Functions 
    bool hasAllowOut() const { return this->allowOut_ != nullptr;};
    void deleteAllowOut() { this->allowOut_ = nullptr;};
    inline const vector<string> & getAllowOut() const { DARABONBA_PTR_GET_CONST(allowOut_, vector<string>) };
    inline vector<string> getAllowOut() { DARABONBA_PTR_GET(allowOut_, vector<string>) };
    inline UpdateSessionNetworkConfig& setAllowOut(const vector<string> & allowOut) { DARABONBA_PTR_SET_VALUE(allowOut_, allowOut) };
    inline UpdateSessionNetworkConfig& setAllowOut(vector<string> && allowOut) { DARABONBA_PTR_SET_RVALUE(allowOut_, allowOut) };


    // denyOut Field Functions 
    bool hasDenyOut() const { return this->denyOut_ != nullptr;};
    void deleteDenyOut() { this->denyOut_ = nullptr;};
    inline const vector<string> & getDenyOut() const { DARABONBA_PTR_GET_CONST(denyOut_, vector<string>) };
    inline vector<string> getDenyOut() { DARABONBA_PTR_GET(denyOut_, vector<string>) };
    inline UpdateSessionNetworkConfig& setDenyOut(const vector<string> & denyOut) { DARABONBA_PTR_SET_VALUE(denyOut_, denyOut) };
    inline UpdateSessionNetworkConfig& setDenyOut(vector<string> && denyOut) { DARABONBA_PTR_SET_RVALUE(denyOut_, denyOut) };


  protected:
    shared_ptr<vector<string>> allowOut_ {};
    shared_ptr<vector<string>> denyOut_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
