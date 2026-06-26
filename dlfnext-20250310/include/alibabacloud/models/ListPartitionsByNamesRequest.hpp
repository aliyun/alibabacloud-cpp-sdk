// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPARTITIONSBYNAMESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPARTITIONSBYNAMESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ListPartitionsByNamesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPartitionsByNamesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(specs, specs_);
    };
    friend void from_json(const Darabonba::Json& j, ListPartitionsByNamesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(specs, specs_);
    };
    ListPartitionsByNamesRequest() = default ;
    ListPartitionsByNamesRequest(const ListPartitionsByNamesRequest &) = default ;
    ListPartitionsByNamesRequest(ListPartitionsByNamesRequest &&) = default ;
    ListPartitionsByNamesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPartitionsByNamesRequest() = default ;
    ListPartitionsByNamesRequest& operator=(const ListPartitionsByNamesRequest &) = default ;
    ListPartitionsByNamesRequest& operator=(ListPartitionsByNamesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->specs_ == nullptr; };
    // specs Field Functions 
    bool hasSpecs() const { return this->specs_ != nullptr;};
    void deleteSpecs() { this->specs_ = nullptr;};
    inline const vector<map<string, string>> & getSpecs() const { DARABONBA_PTR_GET_CONST(specs_, vector<map<string, string>>) };
    inline vector<map<string, string>> getSpecs() { DARABONBA_PTR_GET(specs_, vector<map<string, string>>) };
    inline ListPartitionsByNamesRequest& setSpecs(const vector<map<string, string>> & specs) { DARABONBA_PTR_SET_VALUE(specs_, specs) };
    inline ListPartitionsByNamesRequest& setSpecs(vector<map<string, string>> && specs) { DARABONBA_PTR_SET_RVALUE(specs_, specs) };


  protected:
    // 分区规格列表。
    shared_ptr<vector<map<string, string>>> specs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
