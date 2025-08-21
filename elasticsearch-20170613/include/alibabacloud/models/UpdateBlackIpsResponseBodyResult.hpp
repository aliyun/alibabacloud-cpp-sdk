// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBLACKIPSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBLACKIPSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateBlackIpsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBlackIpsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(esIPBlacklist, esIPBlacklist_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBlackIpsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(esIPBlacklist, esIPBlacklist_);
    };
    UpdateBlackIpsResponseBodyResult() = default ;
    UpdateBlackIpsResponseBodyResult(const UpdateBlackIpsResponseBodyResult &) = default ;
    UpdateBlackIpsResponseBodyResult(UpdateBlackIpsResponseBodyResult &&) = default ;
    UpdateBlackIpsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBlackIpsResponseBodyResult() = default ;
    UpdateBlackIpsResponseBodyResult& operator=(const UpdateBlackIpsResponseBodyResult &) = default ;
    UpdateBlackIpsResponseBodyResult& operator=(UpdateBlackIpsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->esIPBlacklist_ != nullptr; };
    // esIPBlacklist Field Functions 
    bool hasEsIPBlacklist() const { return this->esIPBlacklist_ != nullptr;};
    void deleteEsIPBlacklist() { this->esIPBlacklist_ = nullptr;};
    inline const vector<string> & esIPBlacklist() const { DARABONBA_PTR_GET_CONST(esIPBlacklist_, vector<string>) };
    inline vector<string> esIPBlacklist() { DARABONBA_PTR_GET(esIPBlacklist_, vector<string>) };
    inline UpdateBlackIpsResponseBodyResult& setEsIPBlacklist(const vector<string> & esIPBlacklist) { DARABONBA_PTR_SET_VALUE(esIPBlacklist_, esIPBlacklist) };
    inline UpdateBlackIpsResponseBodyResult& setEsIPBlacklist(vector<string> && esIPBlacklist) { DARABONBA_PTR_SET_RVALUE(esIPBlacklist_, esIPBlacklist) };


  protected:
    std::shared_ptr<vector<string>> esIPBlacklist_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
