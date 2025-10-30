// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONNECTORSRESPONSEBODYCONNECTORSUPGRADETIME_HPP_
#define ALIBABACLOUD_MODELS_LISTCONNECTORSRESPONSEBODYCONNECTORSUPGRADETIME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListConnectorsResponseBodyConnectorsUpgradeTime : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConnectorsResponseBodyConnectorsUpgradeTime& obj) { 
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(Start, start_);
    };
    friend void from_json(const Darabonba::Json& j, ListConnectorsResponseBodyConnectorsUpgradeTime& obj) { 
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
    };
    ListConnectorsResponseBodyConnectorsUpgradeTime() = default ;
    ListConnectorsResponseBodyConnectorsUpgradeTime(const ListConnectorsResponseBodyConnectorsUpgradeTime &) = default ;
    ListConnectorsResponseBodyConnectorsUpgradeTime(ListConnectorsResponseBodyConnectorsUpgradeTime &&) = default ;
    ListConnectorsResponseBodyConnectorsUpgradeTime(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConnectorsResponseBodyConnectorsUpgradeTime() = default ;
    ListConnectorsResponseBodyConnectorsUpgradeTime& operator=(const ListConnectorsResponseBodyConnectorsUpgradeTime &) = default ;
    ListConnectorsResponseBodyConnectorsUpgradeTime& operator=(ListConnectorsResponseBodyConnectorsUpgradeTime &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->end_ == nullptr
        && return this->start_ == nullptr; };
    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline string end() const { DARABONBA_PTR_GET_DEFAULT(end_, "") };
    inline ListConnectorsResponseBodyConnectorsUpgradeTime& setEnd(string end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline string start() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
    inline ListConnectorsResponseBodyConnectorsUpgradeTime& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


  protected:
    // End time.
    std::shared_ptr<string> end_ = nullptr;
    // Start time.
    std::shared_ptr<string> start_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
