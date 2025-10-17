// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPREFIXLISTSRESPONSEBODYPREFIXLISTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPREFIXLISTSRESPONSEBODYPREFIXLISTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePrefixListsResponseBodyPrefixListsPrefixList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribePrefixListsResponseBodyPrefixLists : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePrefixListsResponseBodyPrefixLists& obj) { 
      DARABONBA_PTR_TO_JSON(PrefixList, prefixList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePrefixListsResponseBodyPrefixLists& obj) { 
      DARABONBA_PTR_FROM_JSON(PrefixList, prefixList_);
    };
    DescribePrefixListsResponseBodyPrefixLists() = default ;
    DescribePrefixListsResponseBodyPrefixLists(const DescribePrefixListsResponseBodyPrefixLists &) = default ;
    DescribePrefixListsResponseBodyPrefixLists(DescribePrefixListsResponseBodyPrefixLists &&) = default ;
    DescribePrefixListsResponseBodyPrefixLists(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePrefixListsResponseBodyPrefixLists() = default ;
    DescribePrefixListsResponseBodyPrefixLists& operator=(const DescribePrefixListsResponseBodyPrefixLists &) = default ;
    DescribePrefixListsResponseBodyPrefixLists& operator=(DescribePrefixListsResponseBodyPrefixLists &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->prefixList_ == nullptr; };
    // prefixList Field Functions 
    bool hasPrefixList() const { return this->prefixList_ != nullptr;};
    void deletePrefixList() { this->prefixList_ = nullptr;};
    inline const vector<Models::DescribePrefixListsResponseBodyPrefixListsPrefixList> & prefixList() const { DARABONBA_PTR_GET_CONST(prefixList_, vector<Models::DescribePrefixListsResponseBodyPrefixListsPrefixList>) };
    inline vector<Models::DescribePrefixListsResponseBodyPrefixListsPrefixList> prefixList() { DARABONBA_PTR_GET(prefixList_, vector<Models::DescribePrefixListsResponseBodyPrefixListsPrefixList>) };
    inline DescribePrefixListsResponseBodyPrefixLists& setPrefixList(const vector<Models::DescribePrefixListsResponseBodyPrefixListsPrefixList> & prefixList) { DARABONBA_PTR_SET_VALUE(prefixList_, prefixList) };
    inline DescribePrefixListsResponseBodyPrefixLists& setPrefixList(vector<Models::DescribePrefixListsResponseBodyPrefixListsPrefixList> && prefixList) { DARABONBA_PTR_SET_RVALUE(prefixList_, prefixList) };


  protected:
    std::shared_ptr<vector<Models::DescribePrefixListsResponseBodyPrefixListsPrefixList>> prefixList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
