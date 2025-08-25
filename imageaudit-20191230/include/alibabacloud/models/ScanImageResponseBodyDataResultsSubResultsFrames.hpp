// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCANIMAGERESPONSEBODYDATARESULTSSUBRESULTSFRAMES_HPP_
#define ALIBABACLOUD_MODELS_SCANIMAGERESPONSEBODYDATARESULTSSUBRESULTSFRAMES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageaudit20191230
{
namespace Models
{
  class ScanImageResponseBodyDataResultsSubResultsFrames : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScanImageResponseBodyDataResultsSubResultsFrames& obj) { 
      DARABONBA_PTR_TO_JSON(Rate, rate_);
      DARABONBA_PTR_TO_JSON(URL, URL_);
    };
    friend void from_json(const Darabonba::Json& j, ScanImageResponseBodyDataResultsSubResultsFrames& obj) { 
      DARABONBA_PTR_FROM_JSON(Rate, rate_);
      DARABONBA_PTR_FROM_JSON(URL, URL_);
    };
    ScanImageResponseBodyDataResultsSubResultsFrames() = default ;
    ScanImageResponseBodyDataResultsSubResultsFrames(const ScanImageResponseBodyDataResultsSubResultsFrames &) = default ;
    ScanImageResponseBodyDataResultsSubResultsFrames(ScanImageResponseBodyDataResultsSubResultsFrames &&) = default ;
    ScanImageResponseBodyDataResultsSubResultsFrames(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScanImageResponseBodyDataResultsSubResultsFrames() = default ;
    ScanImageResponseBodyDataResultsSubResultsFrames& operator=(const ScanImageResponseBodyDataResultsSubResultsFrames &) = default ;
    ScanImageResponseBodyDataResultsSubResultsFrames& operator=(ScanImageResponseBodyDataResultsSubResultsFrames &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->rate_ != nullptr
        && this->URL_ != nullptr; };
    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline float rate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0.0) };
    inline ScanImageResponseBodyDataResultsSubResultsFrames& setRate(float rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


    // URL Field Functions 
    bool hasURL() const { return this->URL_ != nullptr;};
    void deleteURL() { this->URL_ = nullptr;};
    inline string URL() const { DARABONBA_PTR_GET_DEFAULT(URL_, "") };
    inline ScanImageResponseBodyDataResultsSubResultsFrames& setURL(string URL) { DARABONBA_PTR_SET_VALUE(URL_, URL) };


  protected:
    std::shared_ptr<float> rate_ = nullptr;
    std::shared_ptr<string> URL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageaudit20191230
#endif
