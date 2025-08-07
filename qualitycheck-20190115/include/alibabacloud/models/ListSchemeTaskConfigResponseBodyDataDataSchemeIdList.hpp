// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCHEMETASKCONFIGRESPONSEBODYDATADATASCHEMEIDLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSCHEMETASKCONFIGRESPONSEBODYDATADATASCHEMEIDLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListSchemeTaskConfigResponseBodyDataDataSchemeIdList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSchemeTaskConfigResponseBodyDataDataSchemeIdList& obj) { 
      DARABONBA_PTR_TO_JSON(SchemeIdList, schemeIdList_);
    };
    friend void from_json(const Darabonba::Json& j, ListSchemeTaskConfigResponseBodyDataDataSchemeIdList& obj) { 
      DARABONBA_PTR_FROM_JSON(SchemeIdList, schemeIdList_);
    };
    ListSchemeTaskConfigResponseBodyDataDataSchemeIdList() = default ;
    ListSchemeTaskConfigResponseBodyDataDataSchemeIdList(const ListSchemeTaskConfigResponseBodyDataDataSchemeIdList &) = default ;
    ListSchemeTaskConfigResponseBodyDataDataSchemeIdList(ListSchemeTaskConfigResponseBodyDataDataSchemeIdList &&) = default ;
    ListSchemeTaskConfigResponseBodyDataDataSchemeIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSchemeTaskConfigResponseBodyDataDataSchemeIdList() = default ;
    ListSchemeTaskConfigResponseBodyDataDataSchemeIdList& operator=(const ListSchemeTaskConfigResponseBodyDataDataSchemeIdList &) = default ;
    ListSchemeTaskConfigResponseBodyDataDataSchemeIdList& operator=(ListSchemeTaskConfigResponseBodyDataDataSchemeIdList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->schemeIdList_ != nullptr; };
    // schemeIdList Field Functions 
    bool hasSchemeIdList() const { return this->schemeIdList_ != nullptr;};
    void deleteSchemeIdList() { this->schemeIdList_ = nullptr;};
    inline const vector<int64_t> & schemeIdList() const { DARABONBA_PTR_GET_CONST(schemeIdList_, vector<int64_t>) };
    inline vector<int64_t> schemeIdList() { DARABONBA_PTR_GET(schemeIdList_, vector<int64_t>) };
    inline ListSchemeTaskConfigResponseBodyDataDataSchemeIdList& setSchemeIdList(const vector<int64_t> & schemeIdList) { DARABONBA_PTR_SET_VALUE(schemeIdList_, schemeIdList) };
    inline ListSchemeTaskConfigResponseBodyDataDataSchemeIdList& setSchemeIdList(vector<int64_t> && schemeIdList) { DARABONBA_PTR_SET_RVALUE(schemeIdList_, schemeIdList) };


  protected:
    std::shared_ptr<vector<int64_t>> schemeIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
