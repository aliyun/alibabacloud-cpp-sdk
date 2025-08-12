// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESHOWLISTRESPONSEBODYSHOWLISTINFOSHOWLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESHOWLISTRESPONSEBODYSHOWLISTINFOSHOWLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeShowListResponseBodyShowListInfoShowListShow.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeShowListResponseBodyShowListInfoShowList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeShowListResponseBodyShowListInfoShowList& obj) { 
      DARABONBA_PTR_TO_JSON(Show, show_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeShowListResponseBodyShowListInfoShowList& obj) { 
      DARABONBA_PTR_FROM_JSON(Show, show_);
    };
    DescribeShowListResponseBodyShowListInfoShowList() = default ;
    DescribeShowListResponseBodyShowListInfoShowList(const DescribeShowListResponseBodyShowListInfoShowList &) = default ;
    DescribeShowListResponseBodyShowListInfoShowList(DescribeShowListResponseBodyShowListInfoShowList &&) = default ;
    DescribeShowListResponseBodyShowListInfoShowList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeShowListResponseBodyShowListInfoShowList() = default ;
    DescribeShowListResponseBodyShowListInfoShowList& operator=(const DescribeShowListResponseBodyShowListInfoShowList &) = default ;
    DescribeShowListResponseBodyShowListInfoShowList& operator=(DescribeShowListResponseBodyShowListInfoShowList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->show_ != nullptr; };
    // show Field Functions 
    bool hasShow() const { return this->show_ != nullptr;};
    void deleteShow() { this->show_ = nullptr;};
    inline const vector<Models::DescribeShowListResponseBodyShowListInfoShowListShow> & show() const { DARABONBA_PTR_GET_CONST(show_, vector<Models::DescribeShowListResponseBodyShowListInfoShowListShow>) };
    inline vector<Models::DescribeShowListResponseBodyShowListInfoShowListShow> show() { DARABONBA_PTR_GET(show_, vector<Models::DescribeShowListResponseBodyShowListInfoShowListShow>) };
    inline DescribeShowListResponseBodyShowListInfoShowList& setShow(const vector<Models::DescribeShowListResponseBodyShowListInfoShowListShow> & show) { DARABONBA_PTR_SET_VALUE(show_, show) };
    inline DescribeShowListResponseBodyShowListInfoShowList& setShow(vector<Models::DescribeShowListResponseBodyShowListInfoShowListShow> && show) { DARABONBA_PTR_SET_RVALUE(show_, show) };


  protected:
    std::shared_ptr<vector<Models::DescribeShowListResponseBodyShowListInfoShowListShow>> show_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
