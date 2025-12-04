// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCALLINPOOLTRANSFERCONFIGRESPONSEBODYDATADETAILS_HPP_
#define ALIBABACLOUD_MODELS_QUERYCALLINPOOLTRANSFERCONFIGRESPONSEBODYDATADETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class QueryCallInPoolTransferConfigResponseBodyDataDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCallInPoolTransferConfigResponseBodyDataDetails& obj) { 
      DARABONBA_PTR_TO_JSON(Called, called_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCallInPoolTransferConfigResponseBodyDataDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(Called, called_);
    };
    QueryCallInPoolTransferConfigResponseBodyDataDetails() = default ;
    QueryCallInPoolTransferConfigResponseBodyDataDetails(const QueryCallInPoolTransferConfigResponseBodyDataDetails &) = default ;
    QueryCallInPoolTransferConfigResponseBodyDataDetails(QueryCallInPoolTransferConfigResponseBodyDataDetails &&) = default ;
    QueryCallInPoolTransferConfigResponseBodyDataDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCallInPoolTransferConfigResponseBodyDataDetails() = default ;
    QueryCallInPoolTransferConfigResponseBodyDataDetails& operator=(const QueryCallInPoolTransferConfigResponseBodyDataDetails &) = default ;
    QueryCallInPoolTransferConfigResponseBodyDataDetails& operator=(QueryCallInPoolTransferConfigResponseBodyDataDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->called_ == nullptr; };
    // called Field Functions 
    bool hasCalled() const { return this->called_ != nullptr;};
    void deleteCalled() { this->called_ = nullptr;};
    inline string called() const { DARABONBA_PTR_GET_DEFAULT(called_, "") };
    inline QueryCallInPoolTransferConfigResponseBodyDataDetails& setCalled(string called) { DARABONBA_PTR_SET_VALUE(called_, called) };


  protected:
    // The number used to transfer the call.
    std::shared_ptr<string> called_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
