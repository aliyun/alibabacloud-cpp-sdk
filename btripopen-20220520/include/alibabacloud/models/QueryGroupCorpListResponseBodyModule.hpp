// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYGROUPCORPLISTRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_QUERYGROUPCORPLISTRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class QueryGroupCorpListResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryGroupCorpListResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(corp_id, corpId_);
      DARABONBA_PTR_TO_JSON(corp_name, corpName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryGroupCorpListResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
      DARABONBA_PTR_FROM_JSON(corp_name, corpName_);
    };
    QueryGroupCorpListResponseBodyModule() = default ;
    QueryGroupCorpListResponseBodyModule(const QueryGroupCorpListResponseBodyModule &) = default ;
    QueryGroupCorpListResponseBodyModule(QueryGroupCorpListResponseBodyModule &&) = default ;
    QueryGroupCorpListResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryGroupCorpListResponseBodyModule() = default ;
    QueryGroupCorpListResponseBodyModule& operator=(const QueryGroupCorpListResponseBodyModule &) = default ;
    QueryGroupCorpListResponseBodyModule& operator=(QueryGroupCorpListResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->corpId_ != nullptr
        && this->corpName_ != nullptr; };
    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline QueryGroupCorpListResponseBodyModule& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // corpName Field Functions 
    bool hasCorpName() const { return this->corpName_ != nullptr;};
    void deleteCorpName() { this->corpName_ = nullptr;};
    inline string corpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
    inline QueryGroupCorpListResponseBodyModule& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


  protected:
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<string> corpName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
