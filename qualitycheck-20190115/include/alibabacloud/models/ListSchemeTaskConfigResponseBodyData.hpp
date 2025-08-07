// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCHEMETASKCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTSCHEMETASKCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSchemeTaskConfigResponseBodyDataData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListSchemeTaskConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSchemeTaskConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
    };
    friend void from_json(const Darabonba::Json& j, ListSchemeTaskConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
    };
    ListSchemeTaskConfigResponseBodyData() = default ;
    ListSchemeTaskConfigResponseBodyData(const ListSchemeTaskConfigResponseBodyData &) = default ;
    ListSchemeTaskConfigResponseBodyData(ListSchemeTaskConfigResponseBodyData &&) = default ;
    ListSchemeTaskConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSchemeTaskConfigResponseBodyData() = default ;
    ListSchemeTaskConfigResponseBodyData& operator=(const ListSchemeTaskConfigResponseBodyData &) = default ;
    ListSchemeTaskConfigResponseBodyData& operator=(ListSchemeTaskConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::ListSchemeTaskConfigResponseBodyDataData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::ListSchemeTaskConfigResponseBodyDataData>) };
    inline vector<Models::ListSchemeTaskConfigResponseBodyDataData> data() { DARABONBA_PTR_GET(data_, vector<Models::ListSchemeTaskConfigResponseBodyDataData>) };
    inline ListSchemeTaskConfigResponseBodyData& setData(const vector<Models::ListSchemeTaskConfigResponseBodyDataData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSchemeTaskConfigResponseBodyData& setData(vector<Models::ListSchemeTaskConfigResponseBodyDataData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    std::shared_ptr<vector<Models::ListSchemeTaskConfigResponseBodyDataData>> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
