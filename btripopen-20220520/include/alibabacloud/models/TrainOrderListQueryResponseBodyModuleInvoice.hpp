// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERLISTQUERYRESPONSEBODYMODULEINVOICE_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERLISTQUERYRESPONSEBODYMODULEINVOICE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderListQueryResponseBodyModuleInvoice : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderListQueryResponseBodyModuleInvoice& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderListQueryResponseBodyModuleInvoice& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    TrainOrderListQueryResponseBodyModuleInvoice() = default ;
    TrainOrderListQueryResponseBodyModuleInvoice(const TrainOrderListQueryResponseBodyModuleInvoice &) = default ;
    TrainOrderListQueryResponseBodyModuleInvoice(TrainOrderListQueryResponseBodyModuleInvoice &&) = default ;
    TrainOrderListQueryResponseBodyModuleInvoice(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderListQueryResponseBodyModuleInvoice() = default ;
    TrainOrderListQueryResponseBodyModuleInvoice& operator=(const TrainOrderListQueryResponseBodyModuleInvoice &) = default ;
    TrainOrderListQueryResponseBodyModuleInvoice& operator=(TrainOrderListQueryResponseBodyModuleInvoice &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->title_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline TrainOrderListQueryResponseBodyModuleInvoice& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline TrainOrderListQueryResponseBodyModuleInvoice& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
