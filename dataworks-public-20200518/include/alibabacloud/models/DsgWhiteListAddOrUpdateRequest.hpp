// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGWHITELISTADDORUPDATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DSGWHITELISTADDORUPDATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DsgWhiteListAddOrUpdateRequestWhiteLists.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgWhiteListAddOrUpdateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgWhiteListAddOrUpdateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(WhiteLists, whiteLists_);
    };
    friend void from_json(const Darabonba::Json& j, DsgWhiteListAddOrUpdateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(WhiteLists, whiteLists_);
    };
    DsgWhiteListAddOrUpdateRequest() = default ;
    DsgWhiteListAddOrUpdateRequest(const DsgWhiteListAddOrUpdateRequest &) = default ;
    DsgWhiteListAddOrUpdateRequest(DsgWhiteListAddOrUpdateRequest &&) = default ;
    DsgWhiteListAddOrUpdateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgWhiteListAddOrUpdateRequest() = default ;
    DsgWhiteListAddOrUpdateRequest& operator=(const DsgWhiteListAddOrUpdateRequest &) = default ;
    DsgWhiteListAddOrUpdateRequest& operator=(DsgWhiteListAddOrUpdateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->whiteLists_ != nullptr; };
    // whiteLists Field Functions 
    bool hasWhiteLists() const { return this->whiteLists_ != nullptr;};
    void deleteWhiteLists() { this->whiteLists_ = nullptr;};
    inline const vector<DsgWhiteListAddOrUpdateRequestWhiteLists> & whiteLists() const { DARABONBA_PTR_GET_CONST(whiteLists_, vector<DsgWhiteListAddOrUpdateRequestWhiteLists>) };
    inline vector<DsgWhiteListAddOrUpdateRequestWhiteLists> whiteLists() { DARABONBA_PTR_GET(whiteLists_, vector<DsgWhiteListAddOrUpdateRequestWhiteLists>) };
    inline DsgWhiteListAddOrUpdateRequest& setWhiteLists(const vector<DsgWhiteListAddOrUpdateRequestWhiteLists> & whiteLists) { DARABONBA_PTR_SET_VALUE(whiteLists_, whiteLists) };
    inline DsgWhiteListAddOrUpdateRequest& setWhiteLists(vector<DsgWhiteListAddOrUpdateRequestWhiteLists> && whiteLists) { DARABONBA_PTR_SET_RVALUE(whiteLists_, whiteLists) };


  protected:
    // A collection of whitelists.
    // 
    // This parameter is required.
    std::shared_ptr<vector<DsgWhiteListAddOrUpdateRequestWhiteLists>> whiteLists_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
