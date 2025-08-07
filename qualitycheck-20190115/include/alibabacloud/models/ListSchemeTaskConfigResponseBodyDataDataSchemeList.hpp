// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCHEMETASKCONFIGRESPONSEBODYDATADATASCHEMELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSCHEMETASKCONFIGRESPONSEBODYDATADATASCHEMELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSchemeTaskConfigResponseBodyDataDataSchemeListSchemeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListSchemeTaskConfigResponseBodyDataDataSchemeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSchemeTaskConfigResponseBodyDataDataSchemeList& obj) { 
      DARABONBA_PTR_TO_JSON(SchemeList, schemeList_);
    };
    friend void from_json(const Darabonba::Json& j, ListSchemeTaskConfigResponseBodyDataDataSchemeList& obj) { 
      DARABONBA_PTR_FROM_JSON(SchemeList, schemeList_);
    };
    ListSchemeTaskConfigResponseBodyDataDataSchemeList() = default ;
    ListSchemeTaskConfigResponseBodyDataDataSchemeList(const ListSchemeTaskConfigResponseBodyDataDataSchemeList &) = default ;
    ListSchemeTaskConfigResponseBodyDataDataSchemeList(ListSchemeTaskConfigResponseBodyDataDataSchemeList &&) = default ;
    ListSchemeTaskConfigResponseBodyDataDataSchemeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSchemeTaskConfigResponseBodyDataDataSchemeList() = default ;
    ListSchemeTaskConfigResponseBodyDataDataSchemeList& operator=(const ListSchemeTaskConfigResponseBodyDataDataSchemeList &) = default ;
    ListSchemeTaskConfigResponseBodyDataDataSchemeList& operator=(ListSchemeTaskConfigResponseBodyDataDataSchemeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->schemeList_ != nullptr; };
    // schemeList Field Functions 
    bool hasSchemeList() const { return this->schemeList_ != nullptr;};
    void deleteSchemeList() { this->schemeList_ = nullptr;};
    inline const vector<Models::ListSchemeTaskConfigResponseBodyDataDataSchemeListSchemeList> & schemeList() const { DARABONBA_PTR_GET_CONST(schemeList_, vector<Models::ListSchemeTaskConfigResponseBodyDataDataSchemeListSchemeList>) };
    inline vector<Models::ListSchemeTaskConfigResponseBodyDataDataSchemeListSchemeList> schemeList() { DARABONBA_PTR_GET(schemeList_, vector<Models::ListSchemeTaskConfigResponseBodyDataDataSchemeListSchemeList>) };
    inline ListSchemeTaskConfigResponseBodyDataDataSchemeList& setSchemeList(const vector<Models::ListSchemeTaskConfigResponseBodyDataDataSchemeListSchemeList> & schemeList) { DARABONBA_PTR_SET_VALUE(schemeList_, schemeList) };
    inline ListSchemeTaskConfigResponseBodyDataDataSchemeList& setSchemeList(vector<Models::ListSchemeTaskConfigResponseBodyDataDataSchemeListSchemeList> && schemeList) { DARABONBA_PTR_SET_RVALUE(schemeList_, schemeList) };


  protected:
    std::shared_ptr<vector<Models::ListSchemeTaskConfigResponseBodyDataDataSchemeListSchemeList>> schemeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
