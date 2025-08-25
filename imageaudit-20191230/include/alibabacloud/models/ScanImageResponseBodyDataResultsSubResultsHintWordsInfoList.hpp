// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCANIMAGERESPONSEBODYDATARESULTSSUBRESULTSHINTWORDSINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_SCANIMAGERESPONSEBODYDATARESULTSSUBRESULTSHINTWORDSINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageaudit20191230
{
namespace Models
{
  class ScanImageResponseBodyDataResultsSubResultsHintWordsInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScanImageResponseBodyDataResultsSubResultsHintWordsInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(Context, context_);
    };
    friend void from_json(const Darabonba::Json& j, ScanImageResponseBodyDataResultsSubResultsHintWordsInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(Context, context_);
    };
    ScanImageResponseBodyDataResultsSubResultsHintWordsInfoList() = default ;
    ScanImageResponseBodyDataResultsSubResultsHintWordsInfoList(const ScanImageResponseBodyDataResultsSubResultsHintWordsInfoList &) = default ;
    ScanImageResponseBodyDataResultsSubResultsHintWordsInfoList(ScanImageResponseBodyDataResultsSubResultsHintWordsInfoList &&) = default ;
    ScanImageResponseBodyDataResultsSubResultsHintWordsInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScanImageResponseBodyDataResultsSubResultsHintWordsInfoList() = default ;
    ScanImageResponseBodyDataResultsSubResultsHintWordsInfoList& operator=(const ScanImageResponseBodyDataResultsSubResultsHintWordsInfoList &) = default ;
    ScanImageResponseBodyDataResultsSubResultsHintWordsInfoList& operator=(ScanImageResponseBodyDataResultsSubResultsHintWordsInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->context_ != nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline string context() const { DARABONBA_PTR_GET_DEFAULT(context_, "") };
    inline ScanImageResponseBodyDataResultsSubResultsHintWordsInfoList& setContext(string context) { DARABONBA_PTR_SET_VALUE(context_, context) };


  protected:
    std::shared_ptr<string> context_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageaudit20191230
#endif
