// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEPRIVATELINEAVAILGARESPONSEBODYLIVEPRIVATELINEAVAILGAS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEPRIVATELINEAVAILGARESPONSEBODYLIVEPRIVATELINEAVAILGAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAsLivePrivateLineAvailGA.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAs& obj) { 
      DARABONBA_PTR_TO_JSON(LivePrivateLineAvailGA, livePrivateLineAvailGA_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAs& obj) { 
      DARABONBA_PTR_FROM_JSON(LivePrivateLineAvailGA, livePrivateLineAvailGA_);
    };
    DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAs() = default ;
    DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAs(const DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAs &) = default ;
    DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAs(DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAs &&) = default ;
    DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAs() = default ;
    DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAs& operator=(const DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAs &) = default ;
    DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAs& operator=(DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->livePrivateLineAvailGA_ == nullptr; };
    // livePrivateLineAvailGA Field Functions 
    bool hasLivePrivateLineAvailGA() const { return this->livePrivateLineAvailGA_ != nullptr;};
    void deleteLivePrivateLineAvailGA() { this->livePrivateLineAvailGA_ = nullptr;};
    inline const vector<Models::DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAsLivePrivateLineAvailGA> & livePrivateLineAvailGA() const { DARABONBA_PTR_GET_CONST(livePrivateLineAvailGA_, vector<Models::DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAsLivePrivateLineAvailGA>) };
    inline vector<Models::DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAsLivePrivateLineAvailGA> livePrivateLineAvailGA() { DARABONBA_PTR_GET(livePrivateLineAvailGA_, vector<Models::DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAsLivePrivateLineAvailGA>) };
    inline DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAs& setLivePrivateLineAvailGA(const vector<Models::DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAsLivePrivateLineAvailGA> & livePrivateLineAvailGA) { DARABONBA_PTR_SET_VALUE(livePrivateLineAvailGA_, livePrivateLineAvailGA) };
    inline DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAs& setLivePrivateLineAvailGA(vector<Models::DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAsLivePrivateLineAvailGA> && livePrivateLineAvailGA) { DARABONBA_PTR_SET_RVALUE(livePrivateLineAvailGA_, livePrivateLineAvailGA) };


  protected:
    std::shared_ptr<vector<Models::DescribeLivePrivateLineAvailGAResponseBodyLivePrivateLineAvailGAsLivePrivateLineAvailGA>> livePrivateLineAvailGA_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
