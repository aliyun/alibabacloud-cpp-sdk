// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERLAYOUTSRESPONSEBODYLAYOUTSLAYOUTBLENDLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERLAYOUTSRESPONSEBODYLAYOUTSLAYOUTBLENDLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterLayoutsResponseBodyLayoutsLayoutBlendList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterLayoutsResponseBodyLayoutsLayoutBlendList& obj) { 
      DARABONBA_PTR_TO_JSON(LocationId, locationId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterLayoutsResponseBodyLayoutsLayoutBlendList& obj) { 
      DARABONBA_PTR_FROM_JSON(LocationId, locationId_);
    };
    DescribeCasterLayoutsResponseBodyLayoutsLayoutBlendList() = default ;
    DescribeCasterLayoutsResponseBodyLayoutsLayoutBlendList(const DescribeCasterLayoutsResponseBodyLayoutsLayoutBlendList &) = default ;
    DescribeCasterLayoutsResponseBodyLayoutsLayoutBlendList(DescribeCasterLayoutsResponseBodyLayoutsLayoutBlendList &&) = default ;
    DescribeCasterLayoutsResponseBodyLayoutsLayoutBlendList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterLayoutsResponseBodyLayoutsLayoutBlendList() = default ;
    DescribeCasterLayoutsResponseBodyLayoutsLayoutBlendList& operator=(const DescribeCasterLayoutsResponseBodyLayoutsLayoutBlendList &) = default ;
    DescribeCasterLayoutsResponseBodyLayoutsLayoutBlendList& operator=(DescribeCasterLayoutsResponseBodyLayoutsLayoutBlendList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->locationId_ != nullptr; };
    // locationId Field Functions 
    bool hasLocationId() const { return this->locationId_ != nullptr;};
    void deleteLocationId() { this->locationId_ = nullptr;};
    inline const vector<string> & locationId() const { DARABONBA_PTR_GET_CONST(locationId_, vector<string>) };
    inline vector<string> locationId() { DARABONBA_PTR_GET(locationId_, vector<string>) };
    inline DescribeCasterLayoutsResponseBodyLayoutsLayoutBlendList& setLocationId(const vector<string> & locationId) { DARABONBA_PTR_SET_VALUE(locationId_, locationId) };
    inline DescribeCasterLayoutsResponseBodyLayoutsLayoutBlendList& setLocationId(vector<string> && locationId) { DARABONBA_PTR_SET_RVALUE(locationId_, locationId) };


  protected:
    std::shared_ptr<vector<string>> locationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
