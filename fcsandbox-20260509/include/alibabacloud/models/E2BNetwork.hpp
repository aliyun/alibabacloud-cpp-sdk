// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_E2BNETWORK_HPP_
#define ALIBABACLOUD_MODELS_E2BNETWORK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class E2BNetwork : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const E2BNetwork& obj) { 
      DARABONBA_PTR_TO_JSON(allowOut, allowOut_);
      DARABONBA_PTR_TO_JSON(allowPublicTraffic, allowPublicTraffic_);
      DARABONBA_PTR_TO_JSON(denyOut, denyOut_);
      DARABONBA_PTR_TO_JSON(maskRequestHost, maskRequestHost_);
    };
    friend void from_json(const Darabonba::Json& j, E2BNetwork& obj) { 
      DARABONBA_PTR_FROM_JSON(allowOut, allowOut_);
      DARABONBA_PTR_FROM_JSON(allowPublicTraffic, allowPublicTraffic_);
      DARABONBA_PTR_FROM_JSON(denyOut, denyOut_);
      DARABONBA_PTR_FROM_JSON(maskRequestHost, maskRequestHost_);
    };
    E2BNetwork() = default ;
    E2BNetwork(const E2BNetwork &) = default ;
    E2BNetwork(E2BNetwork &&) = default ;
    E2BNetwork(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~E2BNetwork() = default ;
    E2BNetwork& operator=(const E2BNetwork &) = default ;
    E2BNetwork& operator=(E2BNetwork &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowOut_ == nullptr
        && this->allowPublicTraffic_ == nullptr && this->denyOut_ == nullptr && this->maskRequestHost_ == nullptr; };
    // allowOut Field Functions 
    bool hasAllowOut() const { return this->allowOut_ != nullptr;};
    void deleteAllowOut() { this->allowOut_ = nullptr;};
    inline const vector<string> & getAllowOut() const { DARABONBA_PTR_GET_CONST(allowOut_, vector<string>) };
    inline vector<string> getAllowOut() { DARABONBA_PTR_GET(allowOut_, vector<string>) };
    inline E2BNetwork& setAllowOut(const vector<string> & allowOut) { DARABONBA_PTR_SET_VALUE(allowOut_, allowOut) };
    inline E2BNetwork& setAllowOut(vector<string> && allowOut) { DARABONBA_PTR_SET_RVALUE(allowOut_, allowOut) };


    // allowPublicTraffic Field Functions 
    bool hasAllowPublicTraffic() const { return this->allowPublicTraffic_ != nullptr;};
    void deleteAllowPublicTraffic() { this->allowPublicTraffic_ = nullptr;};
    inline bool getAllowPublicTraffic() const { DARABONBA_PTR_GET_DEFAULT(allowPublicTraffic_, false) };
    inline E2BNetwork& setAllowPublicTraffic(bool allowPublicTraffic) { DARABONBA_PTR_SET_VALUE(allowPublicTraffic_, allowPublicTraffic) };


    // denyOut Field Functions 
    bool hasDenyOut() const { return this->denyOut_ != nullptr;};
    void deleteDenyOut() { this->denyOut_ = nullptr;};
    inline const vector<string> & getDenyOut() const { DARABONBA_PTR_GET_CONST(denyOut_, vector<string>) };
    inline vector<string> getDenyOut() { DARABONBA_PTR_GET(denyOut_, vector<string>) };
    inline E2BNetwork& setDenyOut(const vector<string> & denyOut) { DARABONBA_PTR_SET_VALUE(denyOut_, denyOut) };
    inline E2BNetwork& setDenyOut(vector<string> && denyOut) { DARABONBA_PTR_SET_RVALUE(denyOut_, denyOut) };


    // maskRequestHost Field Functions 
    bool hasMaskRequestHost() const { return this->maskRequestHost_ != nullptr;};
    void deleteMaskRequestHost() { this->maskRequestHost_ = nullptr;};
    inline string getMaskRequestHost() const { DARABONBA_PTR_GET_DEFAULT(maskRequestHost_, "") };
    inline E2BNetwork& setMaskRequestHost(string maskRequestHost) { DARABONBA_PTR_SET_VALUE(maskRequestHost_, maskRequestHost) };


  protected:
    shared_ptr<vector<string>> allowOut_ {};
    shared_ptr<bool> allowPublicTraffic_ {};
    shared_ptr<vector<string>> denyOut_ {};
    shared_ptr<string> maskRequestHost_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
