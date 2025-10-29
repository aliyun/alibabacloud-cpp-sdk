// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUPBPSPEAKDATARESPONSEBODYDESCRIBEUPPEAKTRAFFICS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUPBPSPEAKDATARESPONSEBODYDESCRIBEUPPEAKTRAFFICS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUpBpsPeakDataResponseBodyDescribeUpPeakTrafficsDescribeUpPeakTraffic.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeUpBpsPeakDataResponseBodyDescribeUpPeakTraffics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUpBpsPeakDataResponseBodyDescribeUpPeakTraffics& obj) { 
      DARABONBA_PTR_TO_JSON(DescribeUpPeakTraffic, describeUpPeakTraffic_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUpBpsPeakDataResponseBodyDescribeUpPeakTraffics& obj) { 
      DARABONBA_PTR_FROM_JSON(DescribeUpPeakTraffic, describeUpPeakTraffic_);
    };
    DescribeUpBpsPeakDataResponseBodyDescribeUpPeakTraffics() = default ;
    DescribeUpBpsPeakDataResponseBodyDescribeUpPeakTraffics(const DescribeUpBpsPeakDataResponseBodyDescribeUpPeakTraffics &) = default ;
    DescribeUpBpsPeakDataResponseBodyDescribeUpPeakTraffics(DescribeUpBpsPeakDataResponseBodyDescribeUpPeakTraffics &&) = default ;
    DescribeUpBpsPeakDataResponseBodyDescribeUpPeakTraffics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUpBpsPeakDataResponseBodyDescribeUpPeakTraffics() = default ;
    DescribeUpBpsPeakDataResponseBodyDescribeUpPeakTraffics& operator=(const DescribeUpBpsPeakDataResponseBodyDescribeUpPeakTraffics &) = default ;
    DescribeUpBpsPeakDataResponseBodyDescribeUpPeakTraffics& operator=(DescribeUpBpsPeakDataResponseBodyDescribeUpPeakTraffics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->describeUpPeakTraffic_ == nullptr; };
    // describeUpPeakTraffic Field Functions 
    bool hasDescribeUpPeakTraffic() const { return this->describeUpPeakTraffic_ != nullptr;};
    void deleteDescribeUpPeakTraffic() { this->describeUpPeakTraffic_ = nullptr;};
    inline const vector<Models::DescribeUpBpsPeakDataResponseBodyDescribeUpPeakTrafficsDescribeUpPeakTraffic> & describeUpPeakTraffic() const { DARABONBA_PTR_GET_CONST(describeUpPeakTraffic_, vector<Models::DescribeUpBpsPeakDataResponseBodyDescribeUpPeakTrafficsDescribeUpPeakTraffic>) };
    inline vector<Models::DescribeUpBpsPeakDataResponseBodyDescribeUpPeakTrafficsDescribeUpPeakTraffic> describeUpPeakTraffic() { DARABONBA_PTR_GET(describeUpPeakTraffic_, vector<Models::DescribeUpBpsPeakDataResponseBodyDescribeUpPeakTrafficsDescribeUpPeakTraffic>) };
    inline DescribeUpBpsPeakDataResponseBodyDescribeUpPeakTraffics& setDescribeUpPeakTraffic(const vector<Models::DescribeUpBpsPeakDataResponseBodyDescribeUpPeakTrafficsDescribeUpPeakTraffic> & describeUpPeakTraffic) { DARABONBA_PTR_SET_VALUE(describeUpPeakTraffic_, describeUpPeakTraffic) };
    inline DescribeUpBpsPeakDataResponseBodyDescribeUpPeakTraffics& setDescribeUpPeakTraffic(vector<Models::DescribeUpBpsPeakDataResponseBodyDescribeUpPeakTrafficsDescribeUpPeakTraffic> && describeUpPeakTraffic) { DARABONBA_PTR_SET_RVALUE(describeUpPeakTraffic_, describeUpPeakTraffic) };


  protected:
    std::shared_ptr<vector<Models::DescribeUpBpsPeakDataResponseBodyDescribeUpPeakTrafficsDescribeUpPeakTraffic>> describeUpPeakTraffic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
