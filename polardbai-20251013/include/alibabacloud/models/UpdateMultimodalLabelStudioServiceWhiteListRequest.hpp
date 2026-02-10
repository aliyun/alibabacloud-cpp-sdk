// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMULTIMODALLABELSTUDIOSERVICEWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMULTIMODALLABELSTUDIOSERVICEWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PolardbAI20251013
{
namespace Models
{
  class UpdateMultimodalLabelStudioServiceWhiteListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMultimodalLabelStudioServiceWhiteListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(WhiteList, whiteList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMultimodalLabelStudioServiceWhiteListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(WhiteList, whiteList_);
    };
    UpdateMultimodalLabelStudioServiceWhiteListRequest() = default ;
    UpdateMultimodalLabelStudioServiceWhiteListRequest(const UpdateMultimodalLabelStudioServiceWhiteListRequest &) = default ;
    UpdateMultimodalLabelStudioServiceWhiteListRequest(UpdateMultimodalLabelStudioServiceWhiteListRequest &&) = default ;
    UpdateMultimodalLabelStudioServiceWhiteListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMultimodalLabelStudioServiceWhiteListRequest() = default ;
    UpdateMultimodalLabelStudioServiceWhiteListRequest& operator=(const UpdateMultimodalLabelStudioServiceWhiteListRequest &) = default ;
    UpdateMultimodalLabelStudioServiceWhiteListRequest& operator=(UpdateMultimodalLabelStudioServiceWhiteListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->whiteList_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline UpdateMultimodalLabelStudioServiceWhiteListRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // whiteList Field Functions 
    bool hasWhiteList() const { return this->whiteList_ != nullptr;};
    void deleteWhiteList() { this->whiteList_ = nullptr;};
    inline const vector<string> & getWhiteList() const { DARABONBA_PTR_GET_CONST(whiteList_, vector<string>) };
    inline vector<string> getWhiteList() { DARABONBA_PTR_GET(whiteList_, vector<string>) };
    inline UpdateMultimodalLabelStudioServiceWhiteListRequest& setWhiteList(const vector<string> & whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };
    inline UpdateMultimodalLabelStudioServiceWhiteListRequest& setWhiteList(vector<string> && whiteList) { DARABONBA_PTR_SET_RVALUE(whiteList_, whiteList) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<vector<string>> whiteList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PolardbAI20251013
#endif
