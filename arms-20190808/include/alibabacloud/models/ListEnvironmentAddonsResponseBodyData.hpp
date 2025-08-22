// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVIRONMENTADDONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTENVIRONMENTADDONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEnvironmentAddonsResponseBodyDataAddons.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvironmentAddonsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvironmentAddonsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Addons, addons_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvironmentAddonsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Addons, addons_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListEnvironmentAddonsResponseBodyData() = default ;
    ListEnvironmentAddonsResponseBodyData(const ListEnvironmentAddonsResponseBodyData &) = default ;
    ListEnvironmentAddonsResponseBodyData(ListEnvironmentAddonsResponseBodyData &&) = default ;
    ListEnvironmentAddonsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvironmentAddonsResponseBodyData() = default ;
    ListEnvironmentAddonsResponseBodyData& operator=(const ListEnvironmentAddonsResponseBodyData &) = default ;
    ListEnvironmentAddonsResponseBodyData& operator=(ListEnvironmentAddonsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addons_ != nullptr
        && this->total_ != nullptr; };
    // addons Field Functions 
    bool hasAddons() const { return this->addons_ != nullptr;};
    void deleteAddons() { this->addons_ = nullptr;};
    inline const vector<Models::ListEnvironmentAddonsResponseBodyDataAddons> & addons() const { DARABONBA_PTR_GET_CONST(addons_, vector<Models::ListEnvironmentAddonsResponseBodyDataAddons>) };
    inline vector<Models::ListEnvironmentAddonsResponseBodyDataAddons> addons() { DARABONBA_PTR_GET(addons_, vector<Models::ListEnvironmentAddonsResponseBodyDataAddons>) };
    inline ListEnvironmentAddonsResponseBodyData& setAddons(const vector<Models::ListEnvironmentAddonsResponseBodyDataAddons> & addons) { DARABONBA_PTR_SET_VALUE(addons_, addons) };
    inline ListEnvironmentAddonsResponseBodyData& setAddons(vector<Models::ListEnvironmentAddonsResponseBodyDataAddons> && addons) { DARABONBA_PTR_SET_RVALUE(addons_, addons) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListEnvironmentAddonsResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The queried add-ons.
    std::shared_ptr<vector<Models::ListEnvironmentAddonsResponseBodyDataAddons>> addons_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
