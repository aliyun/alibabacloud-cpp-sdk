// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELAPPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DELAPPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DelAppResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DelAppResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DelAppResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    DelAppResponseBodyData() = default ;
    DelAppResponseBodyData(const DelAppResponseBodyData &) = default ;
    DelAppResponseBodyData(DelAppResponseBodyData &&) = default ;
    DelAppResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DelAppResponseBodyData() = default ;
    DelAppResponseBodyData& operator=(const DelAppResponseBodyData &) = default ;
    DelAppResponseBodyData& operator=(DelAppResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->result_ != nullptr; };
    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline bool result() const { DARABONBA_PTR_GET_DEFAULT(result_, false) };
    inline DelAppResponseBodyData& setResult(bool result) { DARABONBA_PTR_SET_VALUE(result_, result) };


  protected:
    std::shared_ptr<bool> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
