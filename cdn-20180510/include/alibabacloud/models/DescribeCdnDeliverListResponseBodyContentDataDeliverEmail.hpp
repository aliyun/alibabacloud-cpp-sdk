// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNDELIVERLISTRESPONSEBODYCONTENTDATADELIVEREMAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNDELIVERLISTRESPONSEBODYCONTENTDATADELIVEREMAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnDeliverListResponseBodyContentDataDeliverEmail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnDeliverListResponseBodyContentDataDeliverEmail& obj) { 
      DARABONBA_PTR_TO_JSON(to, to_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnDeliverListResponseBodyContentDataDeliverEmail& obj) { 
      DARABONBA_PTR_FROM_JSON(to, to_);
    };
    DescribeCdnDeliverListResponseBodyContentDataDeliverEmail() = default ;
    DescribeCdnDeliverListResponseBodyContentDataDeliverEmail(const DescribeCdnDeliverListResponseBodyContentDataDeliverEmail &) = default ;
    DescribeCdnDeliverListResponseBodyContentDataDeliverEmail(DescribeCdnDeliverListResponseBodyContentDataDeliverEmail &&) = default ;
    DescribeCdnDeliverListResponseBodyContentDataDeliverEmail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnDeliverListResponseBodyContentDataDeliverEmail() = default ;
    DescribeCdnDeliverListResponseBodyContentDataDeliverEmail& operator=(const DescribeCdnDeliverListResponseBodyContentDataDeliverEmail &) = default ;
    DescribeCdnDeliverListResponseBodyContentDataDeliverEmail& operator=(DescribeCdnDeliverListResponseBodyContentDataDeliverEmail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->to_ == nullptr; };
    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline const vector<string> & to() const { DARABONBA_PTR_GET_CONST(to_, vector<string>) };
    inline vector<string> to() { DARABONBA_PTR_GET(to_, vector<string>) };
    inline DescribeCdnDeliverListResponseBodyContentDataDeliverEmail& setTo(const vector<string> & to) { DARABONBA_PTR_SET_VALUE(to_, to) };
    inline DescribeCdnDeliverListResponseBodyContentDataDeliverEmail& setTo(vector<string> && to) { DARABONBA_PTR_SET_RVALUE(to_, to) };


  protected:
    std::shared_ptr<vector<string>> to_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
