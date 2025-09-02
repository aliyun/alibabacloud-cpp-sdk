// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGWHITELISTDELETELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DSGWHITELISTDELETELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgWhiteListDeleteListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgWhiteListDeleteListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ids, ids_);
    };
    friend void from_json(const Darabonba::Json& j, DsgWhiteListDeleteListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
    };
    DsgWhiteListDeleteListRequest() = default ;
    DsgWhiteListDeleteListRequest(const DsgWhiteListDeleteListRequest &) = default ;
    DsgWhiteListDeleteListRequest(DsgWhiteListDeleteListRequest &&) = default ;
    DsgWhiteListDeleteListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgWhiteListDeleteListRequest() = default ;
    DsgWhiteListDeleteListRequest& operator=(const DsgWhiteListDeleteListRequest &) = default ;
    DsgWhiteListDeleteListRequest& operator=(DsgWhiteListDeleteListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ids_ != nullptr; };
    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline const vector<int32_t> & ids() const { DARABONBA_PTR_GET_CONST(ids_, vector<int32_t>) };
    inline vector<int32_t> ids() { DARABONBA_PTR_GET(ids_, vector<int32_t>) };
    inline DsgWhiteListDeleteListRequest& setIds(const vector<int32_t> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
    inline DsgWhiteListDeleteListRequest& setIds(vector<int32_t> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


  protected:
    // The IDs of the whitelists.
    // 
    // This parameter is required.
    std::shared_ptr<vector<int32_t>> ids_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
