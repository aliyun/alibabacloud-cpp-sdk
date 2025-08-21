// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONRESPONSEBODYAPPLICATIONREDIRECTURIS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONRESPONSEBODYAPPLICATIONREDIRECTURIS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class UpdateApplicationResponseBodyApplicationRedirectUris : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationResponseBodyApplicationRedirectUris& obj) { 
      DARABONBA_PTR_TO_JSON(RedirectUri, redirectUri_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationResponseBodyApplicationRedirectUris& obj) { 
      DARABONBA_PTR_FROM_JSON(RedirectUri, redirectUri_);
    };
    UpdateApplicationResponseBodyApplicationRedirectUris() = default ;
    UpdateApplicationResponseBodyApplicationRedirectUris(const UpdateApplicationResponseBodyApplicationRedirectUris &) = default ;
    UpdateApplicationResponseBodyApplicationRedirectUris(UpdateApplicationResponseBodyApplicationRedirectUris &&) = default ;
    UpdateApplicationResponseBodyApplicationRedirectUris(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationResponseBodyApplicationRedirectUris() = default ;
    UpdateApplicationResponseBodyApplicationRedirectUris& operator=(const UpdateApplicationResponseBodyApplicationRedirectUris &) = default ;
    UpdateApplicationResponseBodyApplicationRedirectUris& operator=(UpdateApplicationResponseBodyApplicationRedirectUris &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->redirectUri_ != nullptr; };
    // redirectUri Field Functions 
    bool hasRedirectUri() const { return this->redirectUri_ != nullptr;};
    void deleteRedirectUri() { this->redirectUri_ = nullptr;};
    inline const vector<string> & redirectUri() const { DARABONBA_PTR_GET_CONST(redirectUri_, vector<string>) };
    inline vector<string> redirectUri() { DARABONBA_PTR_GET(redirectUri_, vector<string>) };
    inline UpdateApplicationResponseBodyApplicationRedirectUris& setRedirectUri(const vector<string> & redirectUri) { DARABONBA_PTR_SET_VALUE(redirectUri_, redirectUri) };
    inline UpdateApplicationResponseBodyApplicationRedirectUris& setRedirectUri(vector<string> && redirectUri) { DARABONBA_PTR_SET_RVALUE(redirectUri_, redirectUri) };


  protected:
    std::shared_ptr<vector<string>> redirectUri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
