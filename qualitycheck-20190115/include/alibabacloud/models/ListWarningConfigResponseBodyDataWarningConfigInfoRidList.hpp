// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWARNINGCONFIGRESPONSEBODYDATAWARNINGCONFIGINFORIDLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTWARNINGCONFIGRESPONSEBODYDATAWARNINGCONFIGINFORIDLIST_HPP_
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
  class ListWarningConfigResponseBodyDataWarningConfigInfoRidList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWarningConfigResponseBodyDataWarningConfigInfoRidList& obj) { 
      DARABONBA_PTR_TO_JSON(RidList, ridList_);
    };
    friend void from_json(const Darabonba::Json& j, ListWarningConfigResponseBodyDataWarningConfigInfoRidList& obj) { 
      DARABONBA_PTR_FROM_JSON(RidList, ridList_);
    };
    ListWarningConfigResponseBodyDataWarningConfigInfoRidList() = default ;
    ListWarningConfigResponseBodyDataWarningConfigInfoRidList(const ListWarningConfigResponseBodyDataWarningConfigInfoRidList &) = default ;
    ListWarningConfigResponseBodyDataWarningConfigInfoRidList(ListWarningConfigResponseBodyDataWarningConfigInfoRidList &&) = default ;
    ListWarningConfigResponseBodyDataWarningConfigInfoRidList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWarningConfigResponseBodyDataWarningConfigInfoRidList() = default ;
    ListWarningConfigResponseBodyDataWarningConfigInfoRidList& operator=(const ListWarningConfigResponseBodyDataWarningConfigInfoRidList &) = default ;
    ListWarningConfigResponseBodyDataWarningConfigInfoRidList& operator=(ListWarningConfigResponseBodyDataWarningConfigInfoRidList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ridList_ != nullptr; };
    // ridList Field Functions 
    bool hasRidList() const { return this->ridList_ != nullptr;};
    void deleteRidList() { this->ridList_ = nullptr;};
    inline const vector<string> & ridList() const { DARABONBA_PTR_GET_CONST(ridList_, vector<string>) };
    inline vector<string> ridList() { DARABONBA_PTR_GET(ridList_, vector<string>) };
    inline ListWarningConfigResponseBodyDataWarningConfigInfoRidList& setRidList(const vector<string> & ridList) { DARABONBA_PTR_SET_VALUE(ridList_, ridList) };
    inline ListWarningConfigResponseBodyDataWarningConfigInfoRidList& setRidList(vector<string> && ridList) { DARABONBA_PTR_SET_RVALUE(ridList_, ridList) };


  protected:
    std::shared_ptr<vector<string>> ridList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
